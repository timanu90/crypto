/**
 * Copyright (c) 2017 Tiago Vasconcelos
 *
 * mail: tiago.vasconcelos.18@gmail.com
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * @brief - Base64 basic conversions.
 * @date  - 26-06-2017
 *
 */

#include "hex_base64.h"

/**************************************************************************************************
 *          Module defines
 **************************************************************************************************/


/**************************************************************************************************
 *          Module private functions declaration
 **************************************************************************************************/

/**
 * @brief - atoi_hex, convert an input string char to an integer 4 bit representation.
 * @param[in] c - Char to be converted.
 * @return - integer value.
 */
int atoi_hex(char c);

/**
 * @brief - itoa_hex, convert an input integer to a char representation.
 * @param[in] c - Char to be converted.
 * @return - integer value.
 */
char itoa_hex(int num);

/**************************************************************************************************
 *          Module Private vars.
 **************************************************************************************************/
/**
 * @brief base64_code - Array that hold the 6bit representation for base64 representation.
 */
static char* base64_code = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";


/**************************************************************************************************
 *          Module public function implementation
 **************************************************************************************************/

void string_to_hex(char* str, char* hex)
{
    while(*str) {
        *hex++ = atoi_hex(*str++);
    }
}

void hex_to_string(char* hex, int size, char* str)
{
    while( 0 < size-- ) {
        *str++ = itoa_hex(*hex++);
    }
    *str = '\0';
}

void hex_to_base64(char* hex, int size, char* base64)
{
    /* hex to base64 group 4 bit number in 6 bit numbers. At this point the 4bit numbers are stored in 8bit vars taking a lot of space. */

    if( (size % 4) == 0 ) {

        int iter_hex  = 0;
        int iter_base = 0;

        while (iter_hex < size) {

            char num1 = (hex[iter_hex] << 2) + (hex[iter_hex + 1] >> 2) ;
            char num2 = ((hex[iter_hex + 1] & 0x03) << 4) + hex[iter_hex + 2];

            base64[iter_base] = num1;
            base64[iter_base + 1] = num2;

            iter_hex += 3;
            iter_base += 2;
        }
    }
}

void base64_to_hex(char* base64, int size, char* hex)
{
    int iter_hex  = 0;
    int iter_base = 0;

    while ( iter_base < size) {

        char num1 = base64[iter_base] >> 2;
        char num2 = ((base64[iter_base] & 0x3) << 2) | ((base64[iter_base + 1] >> 4) & 0x3);
        char num3 = base64[iter_base + 1] & 0xF;

        hex[iter_hex] = num1;
        hex[iter_hex + 1] = num2;
        hex[iter_hex + 2] = num3;

        iter_hex += 3;
        iter_base += 2;
    }
}

void base64_to_string(char* base64, int size, char* str)
{
    int i;

    for( i=0; i<size; i++ ) {

        str[i] = base64_code[base64[i]];
    }
    str[i] = '\0';
}

/**************************************************************************************************
 *          Module private function implementation
 **************************************************************************************************/

int atoi_hex(char c)
{
    int ret = 0;

    if( ('0' <= c) && ('9' >= c) ) {
        ret = (int)(c - '0');
    }
    else if (('A' <= c) && ('F' >= c)) {
        ret = (int)(c - 'A' + 10);
    }
    else if (('a' <= c) && ('f' >= c)) {
        ret = (int)(c - 'a' + 10);
    }

    return ret;
}

char itoa_hex(int num)
{
    char ret = '0';

    if ( 0 <= num && 9 >= num ){
        ret = (char)('0' + num);
    }
    else if( 10 <= num && 16 >= num )
    {
        ret = (char)('a' + num - 10);
    }

    return ret;
}

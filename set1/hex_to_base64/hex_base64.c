#include "stdio.h"

#include "hex_base64.h"

static char* base64_code = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";

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

void string_to_hex(char* str, char* hex)
{
    while(*str) {
        *hex++ = atoi_hex(*str++);
    }
}

void hex_to_string(char* hex, char* str)
{

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

        printf("base64: ");
        for(int i=0; i<iter_base; i++ ) {

            printf("%c", base64_code[base64[i]]);
        }
        printf("\n\n");

    }
}

void base64_to_hex(char* base64, char* hex)
{

}

void base64_to_string(char* base64, char* str)
{

}


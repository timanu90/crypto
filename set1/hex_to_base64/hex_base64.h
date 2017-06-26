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

#ifndef HEX_BASE64_H
#define HEX_BASE64_H

/**
 * @brief - string_to_hex, convert an input string to an integer 4 bit representation
 * @param[in] str - Buffer that hold the string
 * @param[out] hex - Buffer that hold the convertion result
 */
void string_to_hex(char* str, char* hex);

/**
 * @brief - hex_to_string, convert an integer 4 bit representation to string format
 * @param[in] hex - Buffer that hold the integer
 * @param[out] str - Buffer that hold the string convertion result
 */
void hex_to_string(char* hex, int size, char* str);

/**
 * @brief - hex_to_base64, convert an integer 4 bit representation to base64 integer 6bit representation
 * @param[in] hex - Buffer that hold the integer
 * @param[in] size - Number of elements in hex buffer
 * @param[out] str - Buffer that hold the base64 convertion result
 */
void hex_to_base64(char* hex, int size, char* base64);

/**
 * @brief - base64_to_hex, convert an integer 6 bit base64 representation to an integer 4 bit representation (hexadecimal)
 * @param[in] base64 - Buffer that hold the integer in base64 format
 * @param[in] size - Number of elements in base64 buffer
 * @param[out] hex - Buffer that hold the hexadecimal convertion result
 */
void base64_to_hex(char* base64, int size, char* hex);

/**
 * @brief - base64_to_string, convert an integer 6 bit representation to string format
 * @param[in] base64 - Buffer that hold the integer
 * @param[out] str - Buffer that hold the string convertion result
 */
void base64_to_string(char* base64, int size, char* str);

#endif // HEX_BASE64_H

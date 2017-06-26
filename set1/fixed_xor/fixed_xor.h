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
 * @brief - Xor operation on buffers.
 * @date  - 26-06-2017
 *
 */

#ifndef FIXED_XOR_H
#define FIXED_XOR_H

/**
 * @brief - fixed_xor, Do a xor between 2 buffers only if they are same size
 * @param[in] hex1 - Buffer that hold first integger
 * @param[in] size1 - Size of buffer1
 * @param[in] hex2 - Buffer that hold second integger
 * @param[in] size2 - Size of buffer2
 * @param[out] out - Buffer that hold the operation result
 * @return 0 if all OK, less than 0 otherwise
 */
int fixed_xor(char* hex1, int size1, char* hex2, int size2, char* out);

#endif // FIXED_XOR_H

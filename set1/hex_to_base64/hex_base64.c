#include "hex_base64.h"

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

void hex_to_base64(char* hex, char* base64)
{

}

void base64_to_hex(char* base64, char* hex)
{

}

void base64_to_string(char* base64, char* str)
{

}


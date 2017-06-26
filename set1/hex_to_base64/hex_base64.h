#ifndef HEX_BASE64_H
#define HEX_BASE64_H

void string_to_hex(char* str, char* hex);

void hex_to_string(char* hex, char* str);

void hex_to_base64(char* hex, int size, char* base64);

void base64_to_hex(char* base64, char* hex);

void base64_to_string(char* base64, char* str);

#endif // HEX_BASE64_H

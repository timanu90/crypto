#include <stdio.h>
#include <string.h>

#include "hex_base64.h"

int main(int argc, char** argv)
{
    printf("*****************************************************\n");
    printf("************     HEX TO BASE 64     *****************\n");

    printf("string to hex:\n");

    const int strMaxSize = 256;

    char string[strMaxSize];
    char hex[strMaxSize];
    char base64[strMaxSize];

    /* Initialize test string */
    strcpy(string, "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d");

    /* Print string size for debug */
    printf("string size: %d\n", (int)strlen(string));

    /* Convert string to hex */
    string_to_hex(string, hex);

    /* Print the input string */
    printf("string: %s\n", string);

    /* Print the hex formated buffer */
    printf("hex   : ");
    for(int i=0; i < (int)strlen(string); i++) {
        printf("%x", hex[i]);
    }
    printf("\n");

    /* Convert hex to base64 */
    hex_to_base64(hex, (int)strlen(string), base64);

    return 0;
}

#include <stdio.h>
#include "main_header.h"



int main() {
    printf("Hello World\n");

    // DATA TYPES
    /*
        https://www.programiz.com/c-programming/c-data-types
        https://www.w3schools.com/c/c_data_types.php
    */
    int age = 24;
    float height = 1.8f;
    char initialLetter = 'T';

    // oq começa com % é um format specifier
    printf("int: %d; Bytes: at least 2, usually 4\n",age);
    printf("float: %.2f; Bytes:4\n",height);
    printf("char: %c; Bytes: 1\n",initialLetter);

    double b = 7.5f;
    printf("double: %.3lf; Bytes: 8\n", b);

    short int a = 10;
    printf("short int: %hd; Bytes: 2 usually\n", a);

    /*
        Other data types:
        long int - %ld, %li
        long long int - %lld, %lli
        unsigned long int - %lu
        unsigned long long int - %llu
        signed char - %c
        unsigned char - %c
        long double - %lf
    */

    printf("\nARITHMETIC OPERATORS: \n");
    arithmetic_ops();

    printf("\nINCREMENT AND DECREMENT: \n");
    inc_n_dec();

    printf("\nASSIGN OPERATORS: \n");
    assign_ops();

    printf("\nASCII VALUE CONVERSION: \n");
    ascii_ops();

    return 0;
}
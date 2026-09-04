#include <stdio.h>
#include "main_header.h"


void inc_n_dec() {
    /*
        https://www.programiz.com/c-programming/c-operators
    */
    int a = 10, b = 100;
    float c = 10.5, d = 100.5;

    printf("++a = %d \n", ++a);
    printf("--b = %d \n", --b);
    printf("++c = %.2f \n", ++c);
    printf("--d = %.3f \n", --d);
}
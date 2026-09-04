#include <stdio.h>
#include "main_header.h"

void arithmetic_ops() {
    /*
        https://www.programiz.com/c-programming/c-operators
    */
    int a = 2;
    int b = 3;
    int c = a+b;
    int d = b-a;
    // conversão explicita de int para float
    float e = (float)a / (float) b;
    int f = a*b;
    int g = a%b;

    printf("a: %d\n",a);
    printf("b: %d\n",b);
    printf("(SUM) c: %d\n",c);
    printf("(SUBTRACT) d: %d\n",d);
    printf("(DIVISION) e: %.2f\n",e);
    printf("(MULTIPLICATION) f: %d\n",f);
    printf("(DIVISION REMAINDER) g: %d\n",g);
}
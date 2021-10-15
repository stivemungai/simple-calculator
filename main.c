/*
Project:  Simple  calculator
Author:   Stephen Mungai
Date:     oct,    2021
Compiler: GCC
Language: C99
Licence:  MIT
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable declaration
    int num1,num2,sum,product,diff,mod;
    float quot;

    // assignment statement
    num1 = 200;
    num2 = 30;

    //computations
    sum = num1 + num2;
    product = num1 * num2;
    diff = num1- num2;
    mod = num1 % num2;
    quot = (float) num1 / num2;

    //output
    printf("\tsimple calculator\n");
    printf("%d + %d = %d\n",num1,num2,sum);
    printf("%d - %d = %d\n",num1,num2,diff);
    printf("%d * %d = %d\n",num1,num2,product);
    printf("%d / %d = %f\n",num1,num2,quot);
    printf("%d mod %d = %d\n",num1,num2,mod);
    return 0;

}

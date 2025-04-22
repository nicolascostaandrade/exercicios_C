/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numero [5];
    numero[0] = 1;
    numero[1] = 2;
    numero[2] = 3;
    numero[3] = 4;
    numero[4] = 5;
    
    for (int i = 0; i < 2; i++){
        printf("%d\n", numero[i]);
    }
    return 0;
}
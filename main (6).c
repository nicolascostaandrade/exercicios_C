/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numeros[5], cubos[5];
    
    for (int i = 0; i < 5; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &numeros[i]);
        cubos[i] = numeros[i] * numeros[i] * numeros [i];
    }
    
    printf("Numero:\n Cubo: \n");
    for (int i = 0; i < 5; i++){
        printf("%d\n%d\n", numeros[i], cubos[i]);
    }

    return 0;
}
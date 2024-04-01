/*1) Criar um algoritmo que leia os elementos de uma matriz inteira de 3 x 3 e imprimir todos os elementos, exceto os elementos da diagonal Secundária..*/
#include <stdio.h>
#include <stdlib.h>

#define tam 3

int main()
{
    int a[tam][tam], i, j;
    for(i=0; i<tam; i++)
    {
        for(j=0; j<tam; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    system("cls");
    for(i=0; i<tam; i++)
    {
        for(j=0; j<tam; j++)
        {
            if(i+j != tam-1)
            {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
    // system("cls");
    return 0;
}




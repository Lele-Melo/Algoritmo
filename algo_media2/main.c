/*Leia 3 valores, no caso, vari�veis A, B e C, que s�o as tr�s notas de um aluno.
A seguir, calcule a m�dia do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5.
Considere que cada nota pode ir de 0 at� 10.0, sempre com uma casa decimal.

Entrada
O arquivo de entrada cont�m 3 valores com uma casa decimal, de dupla precis�o (double).

Sa�da
Imprima a mensagem "MEDIA" e a m�dia do aluno conforme exemplo abaixo, com 1 d�gito ap�s o ponto decimal e com um espa�o
em branco antes e depois da igualdade. Assim como todos os problemas, n�o esque�a de imprimir o fim de linha ap�s o
resultado, caso contr�rio, voc� receber� "Presentation Error".
*/
#include <stdio.h>


int main()
{
    double n1,n2,n3,media;
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    media =(n1*2 + n2*3 + n3*5)/10;
    printf("MEDIA = %lf\n", media);
    return 0;
}

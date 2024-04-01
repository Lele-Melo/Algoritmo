#include <stdio.h>


int main()
{
    int n1,n2;
    float total;
    scanf("%d %d", &n1, &n2);
    if(n1 == 1)
        total=4.0 * (float)n2;
    if(n1 == 2)
        total=4.5 * (float)n2;
    if(n1 == 3)
        total=5.0 * (float)n2;
    if(n1 == 4)
        total=2.0 * (float)n2;
    if(n1 == 5)
        total=1.5 * (float)n2;
    printf("Total: R$ %.2f\n", total);

    return 0;
}

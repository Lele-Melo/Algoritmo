#include <stdio.h>

int main()
{
    char n1[20], n2[20], n3[20];
    fflush(stdin);
    gets(n1);
    //fflush(stdin);
    gets(n2);
    gets(n3);
    if(strcmp(n1,"vertebrado")==0)
    {
        if(strcmp(n2,"ave")==0)
        {
            if(strcmp(n3,"carnivoro")==0)
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else
        {
            if(strcmp(n3,"onivoro")==0)
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
        }

    }
    else
    {
        if(strcmp(n2,"inseto")==0)
        {
            if(strcmp(n3,"hematofago")==0)
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else
        {
            if(strcmp(n3,"hematofago")==0)
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca");
            }
        }
    }
    return 0;
}

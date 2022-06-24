#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int N;
    do
    {
        printf("Entrer un entier positif\n");
        scanf("%d",&N);
    } while (N<0);
    if(N%2==0)
    {
        printf("%d est un nombre pair\n",N);

    }
    else
    {
        printf("%d n'est pair\n",N);
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int soustraction(int a, int b)
{
    return a-b;
}
int main()
{   int c=0;
    int d=0;
    int R=0;
      printf("entrez c\n");
    scanf("%d",&c);
    printf("entrez d\n");
    scanf("%d",&d);

    R=soustraction(c,d);


    printf("le resultat est %d\n",R);//choisir les valeurs a additionner ici
    return 0;
}


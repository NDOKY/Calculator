#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double factoriel(n)
{
    int i;
    int R=1;

}
    for(i=1; i<=n; i++)
{
    R=R*i;

}
printf("la valeur finale est %d",R);

int main()
{
    int A,n;
    printf("entrez le nombre dont vous voulez le factoriel\n");
    scanf("%d",&n);
    factoriel(n);

    return 0;
}

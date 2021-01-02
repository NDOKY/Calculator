#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double pi_euler(int n)
{
int i;
float R=0;
for(i=1;i<=n;i++)
{

R=R+((1/pow(i,2)));
}R=(6*R)/3,141;
return R;
}
int main()
{   int n;
float r;
    printf("entrez le nombre d'iteration\n");
    scanf("%d",&n);
    r=pi_euler(n);
    printf("reponse etre %f\n",r);
    printf("Hello world!\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float racine_carree(int A,int K)
{ float u0=1;
    int i;

    for(i=1;i<=K;i++)
    {
      u0=((u0+A/u0))/2;

    }printf("votre racine est %f",u0);
}

int main(){
int A;//nombre dont on veut racine
printf("entrez votre nombre\n");
scanf("%d",&A);
int K;//nombre d'iterations
printf("entrez le nombre d'iteration");
scanf("%d",&K);
racine_carree(A,K);

return 0;
}

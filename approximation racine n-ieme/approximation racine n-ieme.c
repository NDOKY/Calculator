#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  float  racine_nieme(int A, int n, int k)/*A represente le nombre dont on veut la racine
                                            n represente l exposant
                                            k represente le nombre d'iteration*/
 {
     int i;
    float R=1;
  for(i=1; i<=k; i++)
{
      R=((n-1)*R+A/pow(R,n-1))/n;

}
return(R);
}
int main()
{  int A;
    int k;
    float C;
    int n;
     printf("entrez le nombre dont vous voulez la racine\n");
    scanf("%d",&A);
    printf("entrez le nombre d'iteration\n");
    scanf("%d",&k);
    printf("entrez l exposant\n");
    scanf("%d",&n);
    C=racine_nieme(A,n,k);
    printf("la racine n-ieme de ce nombre est %f",C);
    return 0;
}

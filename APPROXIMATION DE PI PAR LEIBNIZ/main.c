#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double pi_leibniz(double n){

   double R=0;
   double i=0;
   for(i=0;i<=n;i++)
    {
   R=R+(pow(-1,i)/(2*i+1))*4;

    }
   printf("%lf", R);
    return R;
}

int main()
{
 double n;
 printf("entrez le nombre d'iterations ");
 scanf("%lf",&n);
 double Pi;
 Pi=pi_leibniz(n);
}

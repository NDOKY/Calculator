#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    printf("on souhaite resoudre une equation du second degre tel que aX^2+bX+c=0\n");
    float a;
    printf("entrez a\n");
    scanf("%f",&a);
    float b;
    printf("entrez la valeur de b\n");
    scanf("%f",&b);
    float c;
    printf("entrez la valeur de c\n");
    scanf("%f",&c);
    float D;//il s'agit du discriminant
    float x,y;//ils representent les solutions
    float e;//il represente la solution unique
    D=b*b-4*a*c;
    if(D>0)
    {
        printf("votre equation admet deux solutions\n");
        x=(-b+sqrt(D))/2*a;
        y=(-b-sqrt(D))/2*a;
        printf("solution 1 est %f\n",x);
        printf("solution 2 est %f\n",y);
    }else if(D<0)
    {
        printf("votre equation n'admet aucune solution\n");


    }else if(D=0)
    {
        printf("votre equation admet une solution\n");
         e=-b/(2*a);
          printf("votre solution unique est %f",e);
    }
    return 0;
}

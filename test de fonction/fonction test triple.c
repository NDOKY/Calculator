#include <stdio.h>
#include <stdlib.h>
int triple(int a)
{   int result=0;
    result=a*3;
    return result;
}
int main()
{
    int one=0;
    int new=0;
    printf("entrer un nombre");
    scanf("%d",&one);
    new=triple(one);
    printf("le triple de ce nombre est %d",new);
    return 0;
}

#include <stdio.h>


int main()
{
    int *a,*b,*m;
    a=(int*)malloc(sizeof(int));
    b=(int*)malloc(sizeof(int));
    m=(int*)malloc(sizeof(int));
    printf("Enter 2 values of a & b :- \n");
    scanf("%d%d",a,b);
    *m=*a**b;
    printf("\nMultiplication of a & b = %d",*m);
    
}

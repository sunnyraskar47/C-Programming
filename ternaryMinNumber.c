#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 Numbers : ");
    scanf("%d%d",&a,&b);

    (a<0)?printf("min is %d",a):printf("min is %d",b);
    return 0;

}
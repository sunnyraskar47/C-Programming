#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Entr 3 Number");
    scanf("%d%d%d",&a,&b,&c);

    b=(a>b)?a:b;
    b=(c>b)?c:b;

    printf("max is %d" ,b);

    return 0;
}
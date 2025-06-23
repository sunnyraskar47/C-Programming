#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter a number");
    scanf("%d",&n);
    sum=0;

    i=1;
    while(i<=n)
    {
    sum=sum+i;
    i++;
    }
    printf(" \n sum is %d",sum);

    return 0;
}
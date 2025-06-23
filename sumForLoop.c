#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter a number");
    scanf("%d",&n);
    sum=0;

    for(i=1;i<=n;i++)
    sum=sum+i;
    printf("sum is %d",sum);

    return 0;
}
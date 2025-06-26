#include<stdio.h>
int main()
{
    int n,rem;
    printf("Enter a Number");
    scanf("%d",&n);
    while(n>0)
    {
        int rem=n%10;
        printf("%d  ",rem);
        n/=10;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int ,n,fact=1;
    printf("enter a number");
    scanf("%d",&n);
    
    i=2;
    while(n>=2)
    {
        fact=fact*n;
        n--;
    }
    printf("fact is %d",fact);
    return 0;
}

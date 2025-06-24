#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n:");
    scanf("%d",&n);

    printf("Even number from 1 to %d:\n",n);
    for(i=1;i<=n;i++)
    {
    if(i%2==0)
    {
    printf("\n%d",i);
    }
}


    printf("\nOdd number from 1 to %d:",n);
    for(i=1;i<=n;i++)
    {
    if(i%2!=0)
    {
    printf("\n%d",i);
    }
}

    return 0;



}
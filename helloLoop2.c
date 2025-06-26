#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter how many times you want to print hello");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("hello\n");
    }
    return 0;
}
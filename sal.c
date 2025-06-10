#include<stdio.h>
int main ()
{
    float bs,da,hra,tax;
    float totalsalary;

    printf("Enter a salary :");
    scanf("%f",&bs);

    printf("Enter a da : ");
    scanf("%f",&da);

    printf("Enter a hra : ");
    scanf("%f",&hra);

     printf("Enter a tax : ");
    scanf("%f",&tax);

    totalsalary=bs+((bs*(da+hra-tax))/100);
    printf("total salary :%.2f",totalsalary);
    

    return 0;

}
#include<stdio.h>
int main()
{
    float radius,height,surface_area,volume;
    printf("\n Enter radius of cylinder:\n");
    scanf("%f",&radius);
    printf("Enter a height of cylinder:\n");
    scanf("%f",&height);
    surface_area=(2*(3.14)*radius*radius)+(2*(3.14)*radius*height);
    volume=(3.14)*radius*radius*height;
    printf("surface_area of cylinder is:%f",surface_area);
    printf("\n volume of cylinder is: %f",volume);
    return 0;
}
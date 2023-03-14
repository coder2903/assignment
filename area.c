#include<stdio.h>
int main()
{
    int r, d;
    
    float pi=3.14, circumference, area;

    printf("Enter radius of the circle:");
    scanf("%d", &r);
   
    d=2*r;
    circumference=2*pi*r;
    area=pi*r*r;
    
    printf("Diameter of the circle is %d\n", d);
    printf("Circumference of the circllle is %f\n", circumference);
    printf("Area of the circle is %f\n", area);
    
    return 0;
}
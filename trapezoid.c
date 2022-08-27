#include <stdio.h>
#include <conio.h>
main()
{
      float l1,l2,h,Area;
      printf("Enter length 1: ");
      scanf("%f",&l1);
      printf("Enter length 2: ");
      scanf("%f",&l2);
      printf("Enter height: ");
      scanf("%f",&h);
      Area=(1/2)*(l1+l2)*h;
      printf("Trapezoid area is %f",Area);
}
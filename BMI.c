#include <stdio.h>
#include <conio.h>
main()
{
	printf("Program BMI Calculation\n");
	printf("-------------------------\n");
	char n,s;
	int w;
	float h,b;
	printf("Enter your name : ");
	scanf("%s",&n);
	printf("Enter your surname : ");
	scanf("%s",&s);
	printf("Enter weight (Kg) : ");
	scanf("%d",&w);
	printf("Enter height (M) : ");
	scanf("%f",&h);
	b=(w/(h*h));
	printf("BMI : %f",b);
}

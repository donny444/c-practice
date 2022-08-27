#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int h,k,r;
	printf("Welcome to circle prograam\n");
	printf("This program used to\n");
	printf("1) Receive the (h,k) point\n");
	printf("2) Receive radius\n");
	printf("3) Output full circle Equation\n");
	printf("----------------------------------------------------------------\n");
	printf("Please enter value of 'h' : ");
	scanf("%d",&h);
	printf("Please enter value of 'k' : ");
	scanf("%d",&k);
	printf("Please enter value of radius : ");
	scanf("%d",&r);
	printf("----------------------------------------------------------------\n");
	if(r>=0)
	{
		printf("(x-(%d))^2+(y-(%d))^2=(%d)^2\n",h,k,r);
	}
	else if(r<0)
	{
		printf("Radius can't be less than 0");
	}
	else
	{
		printf("Something Error");
	}
}

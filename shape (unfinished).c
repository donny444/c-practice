#include<stdio.h>
#include<conio.h>
main()
{
	int ang;
	printf("Welcome to Shape Finder Program.\n");
	printf("Enter amount of angle in shape : ");
	scanf("%d",&ang);
	if(ang=3)
	{
		printf("The shape is triangle.");
	}
	else if(ang=4)
	{
		printf("The shape is square.");
	}
	else if(ang=5)
	{
		printf("The shape is pentagon");
	}
	else if(ang=6)
	{
	printf("The shape is Hexagon");
	}
	else if(ang=7)
	{
	printf("The shape is Heptagon");
	}
	else if(ang=8)
	{
	printf("The shape is Octagon");
	}
	else if(ang=9)
	{
	printf("The shape is nonagon");
	}
	else
	{
	printf("Limited of the program");
	}
}

#include<stdio.h>
#include<conio.h>
main()
{
	char typ;
	printf("Bubble Tea Programming\n");
	printf("Type of Drinking\n");
	printf("[t]Tea\n");
	printf("[m]Milk\n");
	printf("[f]Fruit\n");
	printf("What type do you want? : ");
	scanf("%c",&typ);
	if(typ=='t')
	{
		printf("Type of Drinking : Tea\n");
	}
	else if(typ=='m')
	{
		printf("Type of Drinking : Milk\n");
	}
	else if(typ=='f')
	{
		printf("Type of Drinking : Fruit\n");
	}
	else
	{
		printf("Program Error");
	}
}

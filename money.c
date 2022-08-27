#include<stdio.h>
#include<conio.h>
main()
{
	int inc,mem;
	float mon;
	printf("Welcome to money test.\n");
	printf("----------------------\n");
	printf("Enter your income : ");
	scanf("%d",&inc);
	printf("How many member in your family : ");
	scanf("%d",&mem);
	mon=inc/mem;
	if(mon<=9000)
	{
	printf("You are poor person.\n");
	}
		else if(mon>=9000&&mon<=30000)
		{
		printf("You are normal person\n");
		}
			else if(mon>=30000&&mon<=300000)
			{
				printf("You are rich person\n");
			}
				else
				{
					printf("Can't defined");
				}
	printf("Thanks for playing.");
}

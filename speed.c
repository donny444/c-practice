#include <stdio.h>
#include <conio.h>
main()
{
	int v,s,t;
	printf("Program Calculate Speed\n");
	printf("Enter Distance : ");
	scanf("%d",&s);
	printf("Enter Time : ");
	scanf("%d",&t);
	v=s/t;
	printf("Car Speed : %d\n",v);
	if(v<60)
	{
		printf("The Speed is Slow");
	}
		else if(v>=60&&v<=90)
		{
			printf("The Speed is Standard");
		}
			else if(v>=90&&v<=120)
			{
				printf("The Speed is Fast");
			}
				else;
				{
					printf("The Speed is Danger");
				}
	getch();	
}

#include<stdio.h>
main()
{
	int select;
	printf("Please select\n1)Push Day\n2)Pull Day\n3)Leg Day\n");
	scanf("%d",&select);
	switch(select)
	{
		case 1:
			printf("You will have push day tomorrow");
			break;
		case 2:
			printf("You will have pull day tomorrow");
			break;
		case 3:
			printf("You will have leg day tomorrow");
			break;
		default:
			printf("Please type only '1','2' or '3'");
	}
}

#include<stdio.h>
main()
{
	int result,height,weight;
	printf("Enter you weight[kg]: ");
	scanf("%d",&weight);
	printf("Enter your height[cm]: ");
	scanf("%d",&height);
	result=height-weight;
	if(result>115)
	{
		printf("Thin");
	}
	else if(result>=105)
	{
		printf("Good Shape");
	}
	else
	{
		printf("Fat");
	}
}

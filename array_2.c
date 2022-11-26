#include<stdio.h>
int main()
{
	int bts[3][4],i,j,sum=0,sumrow,min=0,max=0;
	float mean,meanrow;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Enter bts[%d][%d]: ",i,j);
			scanf("%d",&bts[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		sumrow=0;
		for(j=0;j<4;j++)
		{
			sum+=bts[i][j];
			sumrow+=bts[i][j];
		}
		printf("Sum of row %d = %d\n",i,sumrow);
	}
	printf("Summation = %d",sum);
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(bts[i][j]>max)
			{
				max=bts[i][j];
			}
			if(bts[i][j]<min)
			{
				min=bts[i][j];
			}
		}
	}
	printf("Minimum Value = %d",min);
	printf("Maximum Value = %d",max);
	return 0;
}

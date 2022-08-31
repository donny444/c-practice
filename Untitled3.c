#include<stdio.h>
main()
{
	int data[5]={48,26,15,37,12},a,b,c,swap;
	for(b=0;b<4;b++)
	{
		for(a=0;a<4;a++)
		{
			if(data[a]>data[a+1])
			{
				swap=data[a];
				data[a]=data[a+1];
				data[a+1]=swap;
			}	
		}
		for(c=0;c<5;c++)
		{
			printf("%d ",data[c]);
		}
		printf("\n");
	}

}

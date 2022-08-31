#include<stdio.h>
main()
{
	float sum=0,avg=0,data[5];
	int i;
	printf("Enter num_1: ");
	scanf("%f",&data[0]);
	printf("Enter num_2: ");
	scanf("%f",&data[1]);
	printf("Enter num_3: ");
	scanf("%f",&data[2]);
	printf("Enter num_4: ");
	scanf("%f",&data[3]);
	printf("Enter num_5: ");
	scanf("%f",&data[4]);
	for(i=0;i<5;i++)
	{
		sum=sum+data[i];
	}
	avg=sum/5;
	printf("%f\n",sum);
	printf("Average number=%.2f",avg);
}

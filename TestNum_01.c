#include<stdio.h>
int main()
{
	int num1,num2,product;
	printf("Enter num1 and num2: ");
	scanf("%d %d",&num1,&num2);
	product=num1*num2;
	if(product>0)
		printf("%d is positive number\n",product);
	else if(product==0)
		printf("%d is zero\n",product);
	else
		printf("%d is negative number\n",product);
	return 0;
}

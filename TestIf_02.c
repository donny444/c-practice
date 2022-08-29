#include<stdio.h>
int main()
{
	int inum=11;
	printf("Enter interger number: ");
	scanf("%d",&inum);
	if(inum%2==0)
		printf("%d is even number\n",inum);
	else
		printf("%d is odd number\n",inum);
	printf("Goodbye\n");
	return 0;
}

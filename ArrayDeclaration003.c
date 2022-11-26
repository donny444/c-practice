#include<stdio.h>
int main()
{
	int number1[6]={212,313,414,515,616,717};
	int answer;
	printf("First Display\n");
	printf("number1[0] = %d\n", number1[0]);
	printf("number1[1] = %d\n", number1[1]);
	printf("number1[2] = %d\n", number1[2]);
	printf("number1[3] = %d\n", number1[3]);
	printf("number1[4] = %d\n", number1[4]);
	printf("number1[5] = %d\n", number1[5]);
	printf("-------------\n");
	answer=number1[2]+number1[0];
	printf("num");
	number1[1]=818;number1[4]=919;
	printf("Second Display\n");
	printf("number1[0] = %d\n", number1[0]);
	printf("number1[1] = %d\n", number1[1]);
	printf("number1[2] = %d\n", number1[2]);
	printf("number1[3] = %d\n", number1[3]);
	printf("number1[4] = %d\n", number1[4]);
	printf("number1[5] = %d\n", number1[5]);
	printf("-------------\n");
	return 0;
}

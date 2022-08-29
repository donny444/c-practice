#include<stdio.h>
main()
{
	float score;
	printf("Enter your score: ");
	scanf("%f",&score);
	if(score<60)
		printf("Fail, see you again next semester");
	else
		printf("Pass, congratulation");
}

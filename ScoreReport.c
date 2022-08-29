#include<stdio.h>
main()
{
	float score;
	printf("Enter your score: ");
	scanf("%f",&score);
	if(score>=80)
	printf("You deserve grade A\n");
	else if(score<80&&score>=70)
	printf("You deserve grade B\n");
	else if(score<70&&score>=60)
	printf("You deserve grade C\n");
	else if(score<60&&score>=50)
	printf("You deserve grade D\n");
	else
	printf("You deserve grade F\n");
}

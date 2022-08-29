#include<stdio.h>
int main()
{
	int i,j;
	printf("Enter the value of i : ");
	scanf("%d", &i);
	printf("Enter the value of j : ");
	scanf("%d", &j);
	
	//Comparison Operator (Relational Operator)
	printf("Using Comparison Operator\n");
	printf("i < j is %d\n", i<j);
	printf("i <= j is %d\n", i<=j);
	printf("i == j is %d\n", i==j);
	printf("i > j is %d\n", i>j);
	printf("i >= j is %d\n", i>=j);
	printf("i != j is %d\n", i!=j);
	
	//Logical Operator
	printf("Using Logical Operator\n");
	printf("i && j is %d\n", i&&j);
	printf("i || j is %d\n", i||j);
	printf("!i is %d\n", !i);
	printf("!j is %d\n", !j);
	
	return 0;
}

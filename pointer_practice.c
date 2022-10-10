#include<stdio.h>
void main()
{
	int myNum = 444;	// An int variable
	int* ptr = &myNum;	// A pointer variable, with the name ptr, that stores the address of myNum
	printf("%p\n",&myNum);	// Output the memory address of myNum (444)
	printf("%p\n",ptr);	// Output the memory address of myNum with the pointer
	printf("%d",*ptr);	// Output the value of myNum with the pointer (444)
	getch();
}

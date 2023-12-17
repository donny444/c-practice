#include<stdio.h>
void main()
{
	int myNum = 444;	// An int variable
	int* ptr = &myNum;	// A pointer variable, with the name ptr, that stores the address of myNum
	printf("%p\n",&myNum);	// Output the memory address of myNum (444)
	printf("%p\n",ptr);	// Output the memory address of myNum with the pointer
	printf("%d\n",*ptr);	// Output the value of myNum with the pointer (444)
	
	int myNums[4] = {25, 50, 75, 100};
	int i;
	for(i = 0; i < 4; i++)
	{
		printf("%lu\n", sizeof(myNums[i]));
		printf("%p\n", &myNums[i]);
	}
	printf("%p\n", myNums);
	printf("%p\n", &myNums[0]);
	printf("%d ", *myNums);
	printf("%d ", *(myNums + 1));
	printf("%d ", *(myNums + 2));
	getch();
}

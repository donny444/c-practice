#include<stdio.h>
#include<conio.h>
int main()
{
	int a=14,b=3;
	int i=10,j=2,k=5,x=4,y=5;
	
	//Difference between / and %
	printf("Difference between / and %% \n");
	printf("a = %d \t b = %d \n", a, b);
	printf("a/b = %d \n", a/b);
	printf("a%%b = %d \n\n", a%b);
	
	//Using Casting
	printf("Using Casting\n");
	printf("(float)a/b = %f\n\n", (float)a/b);
	
	//Precedence of Arithmetic Operators
	printf("Precedence of Arithmetic Operators\n");
	printf("i = 10, j = 2, k = 5, x = 4, y = 5 \n");
	printf("i+j*k = %d\n", i+j*k);
	printf("(i+j)*k = %d\n", (i+j)*k);
	printf("i+(j*k) = %d\n", i+(j*k));
	printf("x*y+(i/10*k)-8 = %d\n", x*y+(i/10*k)-8);
	getch();
	return 0;
}

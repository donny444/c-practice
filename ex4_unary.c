#include<stdio.h>
int main()
{
	int a=10,b=10,c,d;
	int k=5,l=5,m,n;
	printf("*** before operation ++ ***\n");
	printf("a = %d, b = %d\n\n", a,b);
	c=a++;
	d=++b;
	printf("*** after operaion ++ ***\n");
	printf("c=a++ \n");
	printf("a = %d , c = %d \n\n", a,c);
	printf("d=++b \n");
	printf("b = %d , d = %d \n\n\n\n", b,d);
	printf("*** before operation -- ***\n");
	printf("k = %d, l = %d \n\n", k,l);
	m=k--;
	n=--l;
	printf("*** after operation -- ***\n");
	printf("m=k-- \n");
	printf("k = %d , m = %d \n\n", k,m);
	printf("n=--1 \n");
	printf("l = %d , n = %d \n\n", l,n);
	return 0;
}

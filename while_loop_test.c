#include<stdio.h>
int main()
{
	int m=0,n;
	printf("Enter Natural Number: ");
	scanf("%d",&n);
	while(n>0)
	{
		while(m!=n-1)
		{
			printf("*");
			m+=1;
		}
		printf("%d\n",n);
		n-=1;
		m=0;
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter Natural Number: ");
	scanf("%d",&n);
	for(m=1;m<=n;m++)
	{
		printf("%d ",m);
		if(m==n)
		{
			printf("\n");
			n--;
			m=0;
		}
	}
}

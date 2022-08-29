#include<stdio.h>
main()
{
	float t_s;
	printf("Enter your total sales: ");
	scanf("%f",&t_s);
	if(t_s>=25000)
		printf("Sales commission: %.2f",t_s*0.1);
	else if(t_s>=10000&&t_s<25000)
		printf("Sales commission: %.2f",t_s*0.07);
	else if(t_s<10000)
		printf("Sales commission: %.2f",t_s*0);
	else;
}

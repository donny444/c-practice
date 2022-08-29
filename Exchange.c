#include<stdio.h>
#include<math.h>
int main()
{
	float thb;
	int choice;
	printf("Enter amount of THB: ");
	scanf("%f",&thb);
	printf("#Please select choice#\n");
	printf("#1.USD#\n");
	printf("#2.EUR#\n");
	printf("#3.CNY#\n");
	printf("#4.KRW#\n");
	printf("Select choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("%.2f THB = %.2f USD",thb,thb*0.027);
			break;
		case 2:
			printf("%.2f THB = %.2f EUR",thb,thb*0.028);
			break;
		case 3:
			printf("%.2f THB = %.2f CNY",thb,thb*0.19);
			break;
		case 4:
			printf("%.2f THB = %.2f KRW",thb,thb*37.09);
			break;
		default:
			printf("Please select choice 1-5 only");
	}
}

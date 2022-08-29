#include<stdio.h>
#include<math.h>
main()
{
	int choice;
	float num1,num2;
	printf("######################\n");
	printf("#Please select choice#\n");
	printf("######################\n");
	printf("#1.Plus(+)#\n");
	printf("#2.Minus(-)#\n");
	printf("#3.Multiply(*)#\n");
	printf("#4.Divide(/)#\n");
	printf("#5.Power(^)#\n");
	printf("######################\n");
	printf("Select choice: ");
	scanf("%d",&choice);
	printf("Enter number1: ");
	scanf("%f",&num1);
	printf("Enter number2: ");
	scanf("%f",&num2);
	switch(choice)
	{
		case 1:
		printf("%f+%f=%f\n",num1,num2,num1+num2);break;
		case 2:
		printf("%f-%f=%f\n",num1,num2,num1-num2);break;
		case 3:
		printf("%f*%f=%f\n",num1,num2,num1*num2);break;
		case 4:
		printf("%f/%f=%f\n",num1,num2,num1/num2);break;
		case 5:
		printf("%f^%f=%f\n",num1,num2,pow(num1,num2));break;
		default:
			printf("Please select choice 1-5 only\n");
	}
}

#include<stdio.h>

char sex;
int weight, height, age, frequency, bmi, bmr, tdee;

main()
{
	printf("Health Calculator\n");
	printf("-----------------\n");
	
	input();
	calculate();
	output();
}

input()
{
	printf("Your weight(kg): ");
	scanf("%d", &weight);
	printf("Your height(cm): ");
	scanf("%d", &height);
	printf("Your age: ");
	scanf("%d", &age);
	printf("Your sex: ");
	scanf("%d", &sex);
	char select;
	printf("How frequenlty do you workout:\na) rarely or never\nb) 1-3 times per week\nc) 4-5 times per week\nd) 6-7 times per week\ne) up to 2 times per day");
	scanf("%c", &select);
	if(select == "a")
	{
		frequency = 1.2;
	}
	if(select == "b")
	{
		frequency = 1.375;
	}
	if(select == "c")
	{
		frequency = 1.55;
	}
	if(select == "d")
	{
		frequency = 1.7;
	}
	if(select == "e")
	{
		frequency = 1.9;
	}
}

calculate()
{
	bmi = weight/((height*height)/10000);
	if(sex == "male")
	{
		bmr = 66+(13.7*weight)+(5*height)-(6.8*age);
	}
	if(sex == "female")
	{
		bmr = 665+(9.6*weight)+(1.8*height)-(4.7*age);
	}
	tdee = frequency*bmr;
}

output()
{
	printf("BMI value = %d", bmi);
	printf("BMR value = %d", bmr);
	printf("TDEE value = %d", tdee);
}

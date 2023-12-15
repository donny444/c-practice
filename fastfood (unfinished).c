#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	int num1, num2, num3;
	char burger[]="", side[]="", drink[]="", nickname[]="", conf[]="";
	printf("Welcome to MacoLo FastFood\n");
	printf("Please enter your nickname(10 letters) : ");
	scanf("%s",&nickname);
	if(strlen(nickname) > 10)
	{
		printf("Nickname is limited to 10 characters");
		return -1;
	}
	printf("-----------------------------------------------------------------------\n");
	printf("HAMBURGER\t:\t[1]Big Cheese\t[2]Sausage\t[3]Truffle\n");
	printf("SIDE DISH\t:\t[4]French Fries\t[5]Onion Ring\t[6]Hashbrown\n");
	printf("DRINKING\t:\t[7]Water\t[8]Juice\t[9]Coffee\n");
	printf("-----------------------------------------------------------------------\n");
	printf("What Hamburger do you want? (1/2/3) : ");
	scanf("%d",&num1);
	switch(num1)
	{
		case 1: burger[10] = "Big Cheese"; break;
		case 2: burger[7] = "Sausage"; break;
		case 3: burger[7] = "Truffle"; break;
		default: {
			printf("Incorrect Number");
			return -1;
		}
	}
	printf("What Side Dish do you want? (4/5/6) : ");
	scanf("%d", &num2);
	switch(num2) {
		case 4: side[12] = "French Fries"; break;
		case 5: side[10] = "Onion Ring"; break;
		case 6: side[9] = "Hashbrown"; break;
		default: {
			printf("Incorrect Number");
			return -1;
		}
	}
	printf("What Drinking do you want? (7/8/9) : ");
	scanf("%d", &num3);
	switch(num3) {
		case 7: drink[5] = "Water"; break;
		case 8: drink[5] = "Juice"; break;
		case 9: drink[6] = "Coffee"; break;
		default: {
			printf("Incorrect Number");
			return -1;
		}
	}
	printf("-----------------------------------------------------------------------\n");
	printf("Please check your order\n");
	printf("Hamburger : %s\n", burger);
	printf("Side Dish : %s\n", side);
	printf("Drinking : %s\n", drink);
	printf("Please confirm your order (yes/no) : ");
	scanf("%s", &conf);
	if(!(strcmp(conf, "yes")))
	{
		printf("Thank you %s",nickname);
	}
	else if(!(strcmp(conf, "no")))
	{
		printf("Goodbyes");
	}
	else
	{
		printf("Only 'yes' or 'no' (case-sensitive)");
	}
	
	return 0;
}

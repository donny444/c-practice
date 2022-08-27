#include <stdio.h>
#include <conio.h>
main()
{
	char feel,know,make;
	printf("Welcome to Love type\n");
	printf("Make for Entertainment, so dont be serious!\n");
	printf("Do you have love? (y/n) : ");
	scanf("%c",&feel);
	printf("Do he/she know it (y/n) : ");
	scanf("%c",&know);
	printf("Do you have show it? (y/n) : ");
	scanf("%c",&make);
	if(feel=y&know=y&&make=y)
	printf("You are in Relationship <3");
	if(feel=y&&know=y&&make=n)
	printf("It not clear Relationship :(");
	if(feel=y&&know=n&&make=y)
	printf("Your lover is unfaithful D:");
	if(feel=n&&know=y&&make=n)
	printf("You ignore who are crushing you ;D");
	if(feel=n&&know=y&&make=y)
	printf("You have an old love :O");
	if(feel=y&&know=n&&make=n)
	printf("You feel alone :,(");
	if(feel=n&&know=y&&make=n)
	printf("You are observe somone :3");
	if(feel=n&&know=n&&make=n);
	printf("You are truly single :P");
}

#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
{
	int ham,sid,dri;
	char fin[] = "",nic[] = "";
	printf("Welcome to MacoLo FastFood\n");
	printf("Please enter your nickname(10 letters) : ");
	scanf("%s",&nic);
	printf("-----------------------------------------------------------------------\n");
	printf("HAMBURGER\t:[1]Big Cheese\t[2]Sausage\t[3]Truffle\n");
	printf("SIDE DISH\t:\tF[4]rench Fries\t[5]Onion Ring\t[6]Hashbrown\n");
	printf("DRINKING\t:\t[7]Water\t[8]Pepsi\t[9]Coffee\n");
	printf("-----------------------------------------------------------------------\n");
	printf("What Hamburger do you want? (1/2/3) : ");
	scanf("%d",&ham);
	printf("What Side Dish do you want? (4/5/6) : ");
	scanf("%d",&sid);
	printf("What Drinking do you want? (7/8/9) : ");
	scanf("%d",&dri);
	printf("-----------------------------------------------------------------------\n");
	printf("Please check your order\n");
	printf("Hamburger Number : %d\n",ham);
	printf("Side Dish Number : %d\n",sid);
	printf("Drinking Number : %d\n",dri);
	printf("Please confirm your order (yes/no) : ");
	scanf("%s", &fin);
	if(!(strcmp(fin, "yes")))
	{
		printf("Thank you %s",nic);
	}
	else if(!(strcmp(fin, "no")))
	{
		printf("Goodbyes");
	}
	else
	{
		printf("Only 'yes' or 'no'");
	}
}

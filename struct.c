#include<stdio.h>
struct profile {
	char name[20];
	int age;
	char gender[10];
	float height_cm;
	float weight_kg;
	char letter;
};
struct profile myProfile;
int main()
{
	strcpy(myProfile.name, "Tanadorn");
	myProfile.age = 18;
	strcpy(myProfile.gender, "Male");
	myProfile.height_cm = 171.5;
	myProfile.weight_kg = 75;
	myProfile.letter = "D";
	my_profile();
	return 0;
}
my_profile()
{
	printf("%s\n",myProfile.name);
	printf("%d\n",myProfile.age);
	printf("%s\n",myProfile.gender);
	printf("%f\n",myProfile.height_cm);
	printf("%.2f\n",myProfile.weight_kg);
	printf("%c\n",myProfile.letter);
}

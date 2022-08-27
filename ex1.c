#include<stdio.h>
#include<conio.h>
main()
{
    int number;
    printf("Enter Interger Number :");
    scanf("%d",&number);
    if(number%2==0)
        printf("Even Number");
    else if(number%2!=0)
        printf("Odd Number");
    else
        printf("Unknown");
}
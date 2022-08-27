#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;
    printf("Enter a b: ");
    scanf("%d %d",&a &b);
    if(a>b)
        printf("Maximun Number: %d",a);
    else if(b>a)
        printf("Maximun Number: %d",b);
    else
        printf("Unknown");
}
#include<stdio.h>
#include<conio.h>
main()
{
    int n1,n2,n3
    printf("Enter Three Number: ");
    scanf("%d %d %d",&n1 &n2 &n3);
    if(n1>n2&&n3)
        printf("Maximum Number: %d",n1);
    else if(n2>n1&&n3)
        printf("Maximum Number: %d",n2);
    else if(n3>n1&&n2)
        printf("Maximum Number: %d",n3);
    else
        print("Unknown");
}
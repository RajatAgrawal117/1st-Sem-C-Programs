#include<stdlib.h>
#include<stdio.h>
int main()
{
    int a,b,c,ch;
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);


    printf("\nPress 1 for addition");
    printf("\nPress 2 for subtraction");
    printf("\nPress 3 for multiplication");
    printf("\nPress 4 for division");
    printf("\nPress 5 to exit");
    printf("Enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("ans is=%d",a+b);
        break;
    case 2:
    printf("ans is%d",a-b);
    break;
    case 3:
    printf("%d",a*b);
    break;
    case 4:
    printf("%d",a/b);
   break;
    case 5:
    exit(0);
    break;
    default:
    printf("Invalid input");
    }
    return 0;


    

}
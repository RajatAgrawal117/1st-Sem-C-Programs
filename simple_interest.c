#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("\nWelcome to Rajat's Simple interest calculator ");
    printf("\nEnter your principal amount that is P ");
    scanf("%d",&a);
    printf("\nNow enter for how many months the interest is to be calculated ");
    scanf("%d",&b);
    printf("\nNow enter the rate of interest ");
    scanf("%d",&c);
    d = a*b*c/100;
    printf("\nYour simple intrest for the given values is  %d",d);

    return 0;


}
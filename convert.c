#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the value of hours ");
    scanf("%d",&a);
    printf("Enter the number of minutes to be converted into hours ");
    scanf("%d",&c);
    b = 60*a;
    d = c/60;
    printf("\nThe number of minutes in those hours is=%d",b);
    printf("\nThe number of hours in those minutes is=%d",d);
    
    return 0;


}
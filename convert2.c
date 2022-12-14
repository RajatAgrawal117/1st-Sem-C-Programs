#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter how many dollars you have ");
    scanf("%d",&a);
    printf("Enter how much gram is to be converted into KG ");
    scanf("%d",&b);
    c = 80*a;
    d = b/1000;
    printf("\nYou have this much Rs.=%d",c);
    printf("\nYou have this much K.G.=%d",d);
    return 0;


}
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the length");
    scanf("%d",&a);
    printf("Enter the width of the rectangle");
    scanf("%d",&d);
    b = a*d;
    c = 2*(a+d);
    printf("Area of square is =%d",b);
    printf("Perimeter of square is =%d",c);
    return 0;

}
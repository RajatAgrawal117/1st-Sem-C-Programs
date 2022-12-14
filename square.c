#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of square ");
    scanf("%d",&a);
    b = a*a;
    c = 4*a;
    printf("\nArea of square is = %d",b);
    printf("\nPerimeter of square is = %d",c);
    return 0;

}
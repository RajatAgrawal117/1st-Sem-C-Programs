#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is the greatest number =%d",a);
        
    }
        
    else if(b>c && b>a)
    {
        printf("b is the greatest number =%d",b);
    }
    else   
    {
        printf("c is the greeatest number = %d",c);
    }
    return 0;



}
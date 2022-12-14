#include<stdio.h>
int main(){
int a=0,b=1,c,i,number;
printf("Enter how many elements of the series you want ");
scanf("%d",&number);
printf("\n%d%d",a,b);
for(i=2;i<number;++i)
{
    c=a+b;
    printf("\n%d",c);
    a=b;
    b=c;
}


return 0;
}
#include<stdio.h>
int main(){

int a;
printf("Enter your age ");
scanf("%d",&a);
if(a>=18)
{
    printf("Congratulations you're eligible for voting");
}
else
{
    printf("You're not eligible for voting");


}
return 0;
}
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the weekday number(1-7)");
    scanf("%d",&a);

    switch(a)
    {
    case 1: 
    printf("Its a monday");
    break;
    
    case 2: 
    printf("Its a tuesday");
    break;
case 3: 
    printf("Its a wednesday");
    break;
case 4: 
    printf("Its a thursday");
    break;
case 5: 
    printf("Its a friday");
    break;
case 6 : 
    printf("Its a saturday");
    break;
    case 7: 
    printf("Its a sunday");
    break;
default:
printf("Enter number between 1 and 7");
 

}
return 0;
}

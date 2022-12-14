#include<stdio.h>
int main()
{
char a,b,c;
printf("\nHello and welcome to the prize distribution ceremony");
printf("\nAnswer the following question with Y for yes and N for no");
printf("\nDId you pass the Maths exam?");
scanf("%c",&a);
printf("Did you pass the Science exam?");
scanf("%c",&b);
if(a == "Y" && b == "Y") {
    printf("You get a prize of 45 ");
}
else if(a == "N" && b == "Y"){
    printf("You get a prize of 15");
}
else if (a == "Y" && b == "N") {
    printf("You get a prize of !5");
}
else{
    printf("YOu get no prize");
}
return 0;
}
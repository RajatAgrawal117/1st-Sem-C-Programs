#include<stdio.h>
int main(){

int a[5],b[5],c[5],i,n;
printf("Enter elements in array: ");
scanf("%d",&n);
printf("Enter elements of 1st array");
for(i=0;i<=4;i++)
{
    scanf("%d",&a[i]);

}
printf("Enter elements of 2nd array: ");
for(i=0;i<=4;i++)
{
    scanf("%d",&b[i]);

}
for(i=0;i<=4;i++)
{
    c[i]=a[i]+b[i];
}
printf("Addition of 2 arrays is :");
for(i=0;i<n;i++)
{
    printf("%d\n",c[i]);
    
}
return 0;
}
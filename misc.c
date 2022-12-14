#include<stdio.h>
void myname()
{
    printf (" Soham Mukherjee");
}
int main()
{
    printf ("My name is :");
    myname();
    return 0;
}

//With Argument with return value
#include<stdio.h>
int sum ( int a,int b)
{
    return a+b;

}
int main ()
{
    int a,b,c;
a=9;
b=87;
c= sum(a,b);
printf ("The sum is %d\n",c);
return 0;
}
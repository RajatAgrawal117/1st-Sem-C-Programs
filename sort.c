#include<stdio.h>
int main()
{
    int a[4]={12,43,99,94};
    int i,j,temp;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    
        }
    }
    for(i=0;i<4;i++)
    {
        printf(" %d ",a[i]);
    
    }
    return 0;
}
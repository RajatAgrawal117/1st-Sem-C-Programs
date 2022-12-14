#include <stdio.h>
int main()
{

    int a[5], b[5], c[5], i, n;

    printf("Enter A elements");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter elements of Array b");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        c[i] = a[i] * b[i];
    }
    for (i = 0; i <= 4; i++)
    {
        printf("%d\t", c[i]);
    }
    return 0;
}
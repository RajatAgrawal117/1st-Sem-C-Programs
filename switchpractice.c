#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    switch (age)
    {
    case 3:
        printf("Age is 3 !\n");
        break;
    case 13:
        printf("Age is 13 ! \n");
        break;
    case 23:
        printf("Age is 23 ! \n");
        break;

    default:
        printf("Age is not 3,13 or 23 ! \n");
        break;
    }
    return 0;
}

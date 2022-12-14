#include <stdio.h>
#include <string.h>
int main()
{
    int len1 = 0, len2 = 0, i1, i2, i;
    int e1 = 0;
    char str1[387387], str2[38738];
    puts("Enter the 1st string");
    gets(&str1[len1]);
    puts("Enter the 2nd string");
    gets(&str2[len2]);
    while (str1[len1] != '\0')
    {
        len1++;
    }

    while (str2[len2] != '\0')
    {
        len2++;
    }
    printf("\nLength of string is : %d", len1);
    printf("\nLength of string is : %d", len2);
    // char index;

    // index = str[4];
    // printf("Fifth character is %c", index);
    i1 = str1[len1];
    i2 = str2[len2];
    if (len1 != len2)
    {
        printf("Strings are not ");
    }

    else
    {
        for (int i = 0; i <= len1; i++)
        {
            if (str1[i] == str2[i])
            {
                e1++;
            }
            else
            {
                printf("Strings are not same");
                e1=0;
            }
        }
        if (e1 == len1)
        {
            printf("Strings are same");
        }

       
    }
     
        
    return 0;
}

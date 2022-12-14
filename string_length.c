
// finding the length of a string using the strlen() function from the string.h library

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000]; // initializing the array to store string characters
 
    // inputting the string
    printf("Enter the string: ");
    scanf("%s", str); 
    
    // initializing the length variable
    int length;
    char reverse_str;

    // Using the strlen() function to return the length of the string and assign it to the length variable
    length = strlen(str); 
    
    // printing the length of string
    printf("The length of the string is %d", length); 
    
 
    return 0;
}

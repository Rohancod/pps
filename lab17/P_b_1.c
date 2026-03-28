//Write a program that dynamically allocates memory for a string of user-defined length. Accept the string 
//input from the user and print it. Then, reverse the string and print the reversed version. Finally, free the 
//memory

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int length;
    printf("Enter the length of the string: ");
    scanf("%d", &length);
    
    char *str = (char *)malloc((length + 1) * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter the string: ");
    scanf("%s", str);
    
    printf("Original string: %s\n", str);
    
    // Reverse the string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    
    printf("Reversed string: %s\n", str);
    
    // Free the allocated memory
    free(str);
    
    return 0;
}
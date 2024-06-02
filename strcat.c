// Understanding strcat function.
#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[20] = "Hello World! ";
    char str2[20] = "Welcome to C.";
    strcat(str1,str2);
    str2[sizeof(str2) - 1] = '\0'; // Ensure null-termination
    printf("%s",str1);
    return 0;
}
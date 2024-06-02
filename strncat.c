// Understanding strncat function.
#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[20] = "Hello World! ";
    char str2[20] = "Welcome to C.";
    strncat(str1,str2,13);
    printf("%s",str1);
    return 0;
}
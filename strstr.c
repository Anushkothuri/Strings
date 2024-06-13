// Finds the first occurrence of the substring in the string 1.
// Using strstr() function.
#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[] = "Hello, World!";
    char str2[] = "World";
    char *ptr = strstr(str1,str2);
    if (ptr != NULL) 
    {
        long position = ptr - str1;
        printf("The substring %s found in %s at position: %ld\n", str2,str1,position);
    } else 
    {
        printf("The substring %s not found in %s\n",str2,str1);
    }
    return 0;
}

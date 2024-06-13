// Understanding how to concatinate two strings.
// Using strcat function.
#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[]="Welcome to ";
    char str2[]="C Program";
    strcat(str1,str2);
    printf("Concatinated string is : %s",str1);
    return 0;
}
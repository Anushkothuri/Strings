// Understanding how to concatinate two strings explicitly.
// Using strncat() function.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="Hello";
    char str2[]=" Macha";
    strncat(str1,str2,3);
    printf("Concatination string: %s",str1);
    return 0;
}
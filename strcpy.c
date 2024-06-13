// Understanding how to copy string from one string to another.
// Using strcpy() function.
#include<stdio.h>
#include<string.h>
int main()
{
    char source[]="Hello World!";
    char destination[20];
    strcpy(destination,source);
    printf("source string: %s\n",source);
    printf("Destination string: %s",destination);
    return 0;
}
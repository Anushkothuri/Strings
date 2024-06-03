// Understanding how to copy string from one string to another explicitly.
// Using strncpy() function.
#include <stdio.h>
#include <string.h>
int main() 
{
    char source[]="Hello";
    char destination[20];
    // specified how many characters will be copied to destination string.
    strncpy(destination,source,3);
    // explicitly ensuring NULL terminator.
    destination[3]='\0';
    printf("source string : %s\n",source);
    printf("Destination string: %s",destination);
    return 0;
}
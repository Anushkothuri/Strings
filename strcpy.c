// Understanding strcpy function.
#include <stdio.h>
#include <string.h>
int main() 
{
    char source[] = "Hello, World!";
    char destination[20];
    strcpy(destination, source);
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
    return 0;
}
// Understanding strncpy function.
#include <stdio.h>
#include <string.h>
int main() 
{
    char source[] = "Hello, World!";
    char destination[20];
    strncpy(destination, source, sizeof(destination) - 1);
    destination[sizeof(destination) - 1] = '\0'; // Ensure null-termination
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
    return 0;
}

//Understanding how to find length of a string.
// Using strlen() function.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="Hello World!";
    int result;
    result=strlen(str1);
    printf("length of the string:%d",result); // Output is 11.
    return 0;
}
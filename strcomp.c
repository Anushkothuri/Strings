// Understanding comparsion between two strings.
// Using strcmp() function.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="Hello";
    char str2[]="Hello";
    int res;
    // returns positive integer if str1 > str2.
    // returns negative integer if str1 < str2.
    // returns 0 if str1==str2.
    res=strcmp(str1,str2);
    printf("%d",res);
    return 0;
}
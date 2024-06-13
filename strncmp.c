// Understanding comparsion of two strings explicitly.
// Using strncmp function.
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
    res=strncmp(str1,str2,4);
    printf("%d",res);
    return 0;
}
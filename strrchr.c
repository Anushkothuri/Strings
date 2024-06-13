// Understanding how to locate the last occurrence of a character in a string.
// Using strrchr() function.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Hello world!";
    char *ptr=strrchr(str,'l');
    if(ptr!=NULL)
    printf("the last occurance of %c in %s is at position: %lu",'l',str,ptr-str);
    else
    printf("not found");
    return 0;
}
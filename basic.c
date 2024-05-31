// C program to Illustrate Strings.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Github";
    printf("%s\n",str);
    int len=0;
    len=strlen(str);
    printf("length of the string is %d",len);
    return 0;
}
// Understanding string comparision.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="python";
    char str2[]="django";
    printf("%d\n",strcmp(str1,str2)); // if str1 > str2 it returns positive value (vice versa).
    printf("%d\n",strcmp(str1,"user"));
    printf("%d",strcmp("user",str2));
    return 0;
}
// Understanding strncmp function.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="python";
    char str2[]="django";
    int res = strncmp(str1,str2,4);
    if(res==0)
    printf("characters are same");
    else
    printf("different characters.");
    return 0;
}
#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv)
{
    char str[] = "abcdefg";
    int i,len;
    char tmp;

    len = strlen(str)-1;

    for(i=0; i<len; i++, len--)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
    }

    printf("str:");
    for(i=0; i<strlen(str); i++)
    {
        printf("%c ", str[i]);
    }
    printf("\n");

    return 0 ;
}
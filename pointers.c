#include<stdio.h>
#include<string.h>
int main()
{
    char *st = "jaiprakash";
    char st2[45];
    strcpy(st2,st);

    printf("now the st2 is %s", st2);

    return 0;
}
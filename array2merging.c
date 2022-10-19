#include<stdio.h>

int main()
{
    char str[100];
    printf("write your full name\t");
    gets(str);
    printf("the result yoou enter is here %s",str);
    gets(str);
     
    return 0;
}
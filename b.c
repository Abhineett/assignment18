#include<stdio.h>
void reversestr(char str[]);

void main()
{
    char str[20];
    reversestr(str);
}
void reversestr(char str1[])
{
    printf("enter string=");
    gets(str1);
    int l=strlen(str1);
    for(int i=l-1;str1[i];i--)
    {
        printf("%c",str1[i]);
    }
}

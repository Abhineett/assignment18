#include<stdio.h>
void palindrom(char str[]);
void main()
{
    char str[20];
    palindrom(str);

}
void palindrom(char str[])
{
    int i,t=0;
    printf("enter string=");
    gets(str);

    int l=strlen(str);
    for(i=0;str[i];i++)
    {
        if(str[i]!=str[l-i-1])
        {
            t=1;
        }

    }
    if(t==0)
        printf("string is palindrome.");
    else
        printf("string is not palindrome.");



}

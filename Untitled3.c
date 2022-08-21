#include<stdio.h>
#include<string.h>
int strlength(char str1[]);
void main()
{
  char str[20];
  int l;
  l=strlength(str);
  printf("length is %d",l);

}
int strlength(char str1[])
{
    int b;
    printf("enter string=");
    gets(str1);
    b=strlen(str1);
    return b;
}

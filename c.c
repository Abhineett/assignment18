#include<stdio.h>
int comp(char str1[]);
int compp(char str2[]);
void main()
{
    char str1[20],str2[20];
    int l1=comp(str1);
    int l2=compp(str2);
    if(l1==l2)
    {
        printf("Both string length are same. it's %d and %d",l1,l2);
        //printf("first string length is %d",l1);
        //printf("second string length is %d",l2);

    }
    else if(l1>l2)
    {
        printf("first string length is greater than second string. it's %d",l1);
    }
    else
        printf("second string length is greater than second string. it's %d",l2);


}
int comp(char str1[])
{
    printf("enter first string=");
    gets(str1);
    int a=strlen(str1);
    return a;
}
int compp(char str2[])
{
    printf("enter second string=");
    gets(str2);
    int b=strlen(str2);
    return b;


}

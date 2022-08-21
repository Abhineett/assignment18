#include<stdio.h>
int alphanumeric(char str[]);
void main()
{
    char str[20];
    alphanumeric(str);

}
int alphanumeric(char str[])
{

    int a=0,b=0;
    printf("enter string=");
    gets(str);
    for(int i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
        {
            a=1;
        }
        if(str[i]>='0'&&str[i]<='9')
        {
           b=1;
        }






    }
    if(a==1&&b==1)
        printf("Yes,string is alphanumeric.");
    else
        printf("No,string is not alphanumeric.");

}

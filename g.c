#include<stdio.h>
void reverseword(char str[]);
void main()
{
    char str[30];
    reverseword(str);
}
void reverseword(char str[])
{
   int i,a;
   printf("enter string=");
   gets(str);
   int l=strlen(str);
   while(i>=0)
   {
       for(i=0;i<=l;i++)
       {
           if(str[i]=='\0')
            l=l-1;
       }
       for(i=l;i>=0;i--)
       {
           if(str[i]==' ')
           {
               i=i+1;
               a=i;
           }

       }

       for(i=a;str[i];i++)
       {
           printf("%c",str[i]);
       }
       printf(" ");
   }

}

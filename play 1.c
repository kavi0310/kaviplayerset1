#include<stdio.h>

int main() {
   char a[100];
   int i,c=0;
   scanf("%s",&a);
   for(i=0;a[i]!='\0';i++)
   {
       c++;
   }
   for(i=c-1;i>=0;i--)
   {
       printf("%c",a[i]);
   }
   
}

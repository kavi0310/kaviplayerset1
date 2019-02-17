#include<stdio.h>
int main()
{
    char a[1000];
    int i,t=0;
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(i%2==0)
        {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
        printf("%c %c ",a[i],a[i+1]);
        }
    }
    
}

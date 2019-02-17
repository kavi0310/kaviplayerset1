#include<stdio.h>
int main()
{
    char a[1000],b[1000];
    int i,j,c=0,l=0,m=0;
    scanf("%s %s",&a,&b);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i;b[j]!='\0';j++)
        {
          if(a[i]==b[j])
          c++;
          break;
        }
    }
    m=l-c;
    if(m==1)
    printf("yes");
    else
    printf("no");
}

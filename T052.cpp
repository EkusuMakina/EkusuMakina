#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];
    int i,m=0,n=0,t=0,s=0,k=0,p;
    gets(a);
    gets(b);
    gets(c);
    p=strlen(a);
    for(i=0;i<p;i++)
    {
        if(a[i]<91&&a[i]>64) m++;
        else if(a[i]>96&&a[i]<123) n++;
        else if(a[i]>47&&a[i]<58) t++;
        else if(a[i]==32) k++;
        else s++;
    }
    p=strlen(b);
    for(i=0;i<p;i++)
    {
        if(b[i]<91&&b[i]>64) m++;
        else if(b[i]>96&&b[i]<123) n++;
        else if(b[i]>47&&b[i]<58) t++;
        else if(b[i]==32) k++;
        else s++;
    }
    p=strlen(c);
    for(i=0;i<p;i++)
    {
        if(c[i]<91&&c[i]>64) m++;
        else if(c[i]>96&&c[i]<123) n++;
        else if(c[i]>47&&c[i]<58) t++;
        else if(c[i]==32) k++;
        else s++;
    }
    printf("%d %d %d %d %d",m,n,t,k,s);
    return 0;
}


#include<stdio.h>
#include<string.h>
void bubble(char s[],int n)
{
    int i,t,k;
    for(i=1;i<n;i++)
    {
        t=s[i];
        k=i-1;
        while(t>s[k])
        {
            s[k+1]=s[k];
            k--;
            if(k==-1) break;
        }
        s[k+1]=t;
    }
}
void bubble2(char s[],int n)
{
    int i,t,k;
    for(i=n+1;i<n*2;i++)
    {
        t=s[i];
        k=i-1;
        while(t<s[k])
        {
            s[k+1]=s[k];
            k--;
            if(k==n-1) break;
        }
        s[k+1]=t;
    }
}
int main()
{
    char s[100],a;
    int n,i,k;
    gets(s);
    n=strlen(s);
    if(n%2==0)
    {
        n=n/2;
        bubble(s,n);
        bubble2(s,n);
        for(i=n;i<n*2;i++)
        {
            printf("%c",s[i]);
        }
        for(i=0;i<n;i++)
        {
            printf("%c",s[i]);
        }
    }
    else
    {
        k=(n-1)/2;
        a=s[k];
        for(i=k;i<n-1;i++)
        {
            s[i]=s[i+1];
        }
        n=k;
        bubble(s,n);
        bubble2(s,n);
        for(i=n;i<n*2;i++)
        {
            printf("%c",s[i]);
        }
        printf("%c",a);
        for(i=0;i<n;i++)
        {
            printf("%c",s[i]);
        }
    }
    return 0;
}

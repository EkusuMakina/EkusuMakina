#include<string.h>
#include<stdlib.h>
#include<stdio.h>
void multi(char a[],char b[])
{
    int i,j,*p;
    int ma,mb;
    ma=strlen(a);
    mb=strlen(b);
    p=(int *)malloc(sizeof(int)*(ma+mb));
    for(i=0;i<ma+mb;i++) p[i]=0;
    for(i=0;i<ma;i++)
    {
        for(j=0;j<mb;j++)
        {
            p[i+j+1]+=(a[i]-'0')*(b[j]-'0');
        }
    }
    for(i=ma+mb-1;i>=0;i--)
    {
        if(p[i]>=10)
        {
            p[i-1]+=p[i]/10;
            p[i]%=10;
        }
    }
    i=0;
    while(p[i]==0) i++;
    for(;i<ma+mb;i++) printf("%d",p[i]);
        printf("\n");
        free(p);
}
int main()
{
    char a[100],b[100];
    gets(a);
    gets(b);
    if(a[0]=='-'&&b[0]!='-')
    {
        printf("-");
        multi(&a[1],b);
    }
    else if(a[0]=='-'&&b[0]=='-')
    {
        multi(&a[1],&b[1]);
    }
    else if(a[0]!='-'&&b[0]=='-')
    {
        printf("-");
        multi(a,&b[1]);
    }
    else
        multi(a,b);
    return 0;
}

#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int main()
{
    int i,j,k,m,c=0,d=0;
    char a[100],b[100],s[100],t[100];
    gets(s);
    gets(a);
    gets(b);
    for(i=0;i<strlen(s);i++)
    {
        m=0;
        k=0;
        for(j=0;j<strlen(a);j++)
            if(s[i]==a[j]) {i++; m++;}
            i-=m;
        if(m==strlen(a))
        {
            for(c=i+d;c<i+strlen(b)+d;c++)
            {
                t[c]=b[k];
                k++;
            }
            i+=m-1;
            d++;
        }
        else{
            t[c]=s[i];
            c++;
        }
    }
    for(i=0;i<c;i++)
    {
        printf("%c",t[i]);
    }
    return 0;
}

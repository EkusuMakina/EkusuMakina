#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[1000],b[1000][1000];
    int i,j,n,t=0,m;
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if((a[i]>64&&a[i]<91)||(a[i]>96&&a[i]<123))
        {
            m=0;
            for(j=i;;j++)
            {
                if((a[j]>64&&a[j]<91)||(a[j]>96&&a[j]<123))
                {
                    b[t][m]=a[j];
                    m++;
                    i++;
                }
                else
                {
                    b[t][m]=' ';
                    t++;
                    break;
                }
            }
            t++;
        }
    }
    for(i=t-2;i>=0;i--)
    {
        printf("%s",b[i]);
    }
    return 0;
}

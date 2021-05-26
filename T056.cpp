#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,n,s=0,h=0,k=0;
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]<=57&&a[i]>=48)
        {
            s++;
            for(k=i;;k++)
            {
                if(a[k]<=57&&a[k]>=48)
                {
                    i++;
                    b[h]=a[k];
                    h++;
                }
                else{
                    b[h]=32;
                    h++;
                    break;
                }
            }
        }
    }
    printf("%d\n",s);
    for(i=0;i<h;i++) printf("%c",b[i]);
    return 0;
}

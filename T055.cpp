#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[10][100],b[10][100];
    int i,k,j;
    for(i=0;i<10;i++)
    {

        scanf("%s",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        k=0;
        for(j=0;j<10;j++)
        {
            if(strcmp(a[i],a[j])>0) k++;
        }
        strcpy(b[k],a[i]);
    }
    for(i=0;i<10;i++) printf("%s ",b[i]);
    return 0;
}

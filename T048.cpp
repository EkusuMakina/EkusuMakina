#include<stdio.h>
#include<stdlib.h>
int main()
{
    int b=0,n,a[100],i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        k=a[i];
        for(j=i-1;j>0&&k<a[j];j--)
        {
            b++;
            a[j+1]=a[j];
        }
        a[j+1]=k;
    }
    printf("%d",b);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],b[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]+b[i]);
    }
    return 0;
}
//弱智题,我还以为是高精度,艹.

#include<stdio.h>
#include<stdlib.h>
void sort(int a[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
int main()
{
    int a[100],b[100],i,j,k,n,m,x=0,q=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[i]);
    }
    if(m<n) printf("NULL");
    if(m>=n)
    {
        sort(a,n);
        sort(b,m);
    }
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=i;j<m;j++)
        {
            if(q==n)
            {
                goto L;
            }
            if(b[j]>=a[i])
            {
                k=1;
                x=x+b[j];
                q++;
            }
            else continue;
        }
        if(k==0)
        {
            printf("NULL");
            return 0;
        }
    }
    L:printf("%d",x);
    return 0;
}

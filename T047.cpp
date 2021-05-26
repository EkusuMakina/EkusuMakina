#include<stdio.h>//¶ş·Ö²éÕÒ
#include<stdlib.h>
int Search(int A[],int n,int f)
{
    int upper=n-1,low=0,mid;
    while(low<=upper)
    {
        mid=low+(upper-low)/2;
        if(A[mid]<f) low=mid+1;
        else if(A[mid]>f)upper=mid-1;
        else return mid;
    }
    return -1;
}
int main()
{
    int A[100000],n,m,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d",&j);
    i=Search(A,n,j);
    if(i>=0)
    {
        printf("%d",i);
    }
    else printf("null");
    return 0;
}

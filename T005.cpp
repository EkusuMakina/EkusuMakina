#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n,j=0;i;(j*=10)+=i%10,i/=10);
    printf(j==n ? "yes" : "no");
    return 0;
}

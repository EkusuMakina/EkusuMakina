#include<stdlib.h>
#include<stdio.h>
double avg(double A[100],double s, double e)
{
    int i;
    double f=0.0;
    for(i=s;i<=e;i++)
    {
        f=f+A[i];
    }
    s=f/(e-s+1);
    return s;
}
int main()
{
    double A[100];
    int n,s,e,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&A[i]);
    }
    scanf("%d%d",&s,&e);
    printf("%lf",avg(A,s,e));
    return 0;
}


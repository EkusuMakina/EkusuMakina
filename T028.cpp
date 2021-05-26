#include<stdio.h>
int x,a;
int judge(int n)
{
    int i,t;
    for(i=1;i<=5;i++)
    {
        if(a&1<<(t=n%10)) return 1;
        a|=1<<t,n/=10;
    }
    return 0;
}
int main()
{
    scanf("%d",&x);
    if(x<2||x>79) return printf("NULL"),0;
    int i,t;
    for(i=1234;(t=x*i)<=98765;i++)
    {
        if(a=0,judge(i)||judge(t)) continue;
        printf("%05d/%05d=%d\n",t,i,x);
    }
    return 0;
}
//zx

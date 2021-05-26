#include <stdio.h>
#include <math.h>
int judge(int n,int m);
int main()
{
    int m,n,g=0,s=0,i;
    scanf("%d%d",&m,&n);
    for(i=pow(10,n-1);i<=pow(10,n)-1;i++)
    {
       if(judge(i,m)==1&&i%m!=0)
       {
        g++;
        s+=i;
       }
    }
     printf("%d %d",g,s);
    return 0;
}
int judge(int n,int m)
{
    int temp,flag=0,i;
    while(n>0)
    {
        temp=n%10;
        if(temp==m)
        {
            flag=1;
            break;
        }
        n/=10;
    }
    return flag;
}

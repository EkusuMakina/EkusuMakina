/*有一些装有铀和铅的盒子，数量均足够多。要求把n（n≤30）个盒子放成一行，
但至少有3个铀放在一起，问有多少种方法？*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,m=3,b=0,c,d;
    cin>>n;
    while(m<=n)
    {
        if((n-m)==1)
        {
            b=b+2;
        }
        if((n-m)==2)
        {
            b++;
        }
        if(n==m)
        {
            b++;
        }
        c=n-m-1;
        d=0;
        if(c>0)
        {
            d=1;
            while(c>0)
            {
                d=d*2;
                c--;
            }
        }
        b=b+2*d;
        c=n-m-2;
        d=0;
        if(c>0)
        {
            d=1;
            while(c>0)
            {
                d=d*2;
                c=c-1;
            }
        }
        b=b+(n-m-1)*d;
        m++;
    }
    cout<<b;
    return 0;
}






















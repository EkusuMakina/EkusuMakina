#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int a,b,j,x,y;
    double s=0,n=0,i;
    cin>>a>>b;
    for(i=1;i<100000;i++)
    {
        n=n*1.0+(1/i);
        s=s*1.0+(1/n);
        x=i;
        if(s>a)
        {
            break;
        }
    }
    cout<<x<<' ';
    for(j=x;j<100000;j++)
    {
        n=n*1.0+(1/j);
        s=s*1.0+(1/n);
        y=j;
        if(s>b)
        {
            break;
        }
    }
    cout<<y;
    return 0;
}

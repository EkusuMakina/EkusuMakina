//已知ack函数对于m≥0和n≥0有定义：ack(0,n)=n+1、ack(m,0)=ack(m-1,1)、ack(m,n)=ack(m-1,ack(m,n-1))。输入m和n，求解ack函数。
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
using namespace std;
int ack(int x,int y)
{
    int n;
    if(x==0)
    {
        n=y+1;
        return n;
    }
    else if(y==0)
    {
        n=ack(x-1,1);
    }
    else{
        n=ack(x-1,ack(x,y-1));
    }
    return n;
}
int main()
{
    int m,b;
    cin>>m>>b;
    m=ack(m,b);
    cout<<m;
    return 0;
}

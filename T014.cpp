#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,i,d;
    cin>>a;
    b=a*a*a;
    c=b/a;
    printf("%d*%d*%d=%d=",a,a,a,b);
        d=c-(a-1);//乘2和除二相消了,这里找到循环输出起点
        for(i=2;i<=a*2-2;i=i+2)
        {
            cout<<d-2+i<<'+';
        }
        cout<<d+(a-1)*2;
}

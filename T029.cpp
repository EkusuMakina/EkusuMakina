/*��һЩװ���˺�Ǧ�ĺ��ӣ��������㹻�ࡣҪ���n��n��30�������ӷų�һ�У�
��������3���˷���һ�����ж����ַ�����*/
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






















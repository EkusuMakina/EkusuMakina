#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n,i,j=2,m,t;
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
    }
    for(n=a+1;n<b;n++)
    {
        for(i=2;i<n;i++)
        {
            if(n%i!=0)
            {
                j++;
            }
        }
        if(j==n)
        {
            cout<<n<<' ';//��ʵ�����ڽ�β�������һ���ո�
        }
        j=2;
    }
}

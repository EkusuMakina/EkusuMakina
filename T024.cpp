#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c;
    double d;
    cin>>a>>b>>c;
    d=a/b;
    cout<<fixed<<setprecision(c)<<d;//��setprecision(n)���þ��ȣ�����n��ʾ��ȷ��С�����nλ
}
S









/*#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    scanf("%d%d%d",&a,&b,&c);
    d=a%b;
    printf("%d.",a/b);
    for(i=0;i<c;i++)
    {
        d=10*d;
        printf("%d",d/b);//�������������,0.1666������0.1667,��֪�������ݵ���ʲô����?!
        d=d%b;
    }
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c;
    double d;
    cin>>a>>b>>c;
    d=a/b;
    cout<<fixed<<setprecision(c)<<d;//用setprecision(n)设置精度，其中n表示精确到小数点后n位
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
        printf("%d",d/b);//这个方法令我震惊,0.1666并不是0.1667,不知道是数据点有什么问题?!
        d=d%b;
    }
    return 0;
}

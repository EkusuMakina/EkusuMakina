#include<iostream>
using namespace std;
int main()
{
    int A=1,B=0,a,b,t=0,n,i;
    cin>>n;
    for(t=1;t<=n;t++)
    {
        a=B;
        b=3*A+B*2;
        A=a;
        B=b;
    }
    cout<<A<<' '<<B;
}

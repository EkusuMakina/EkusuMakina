#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
    int n,m=7,a;
    cin>>n;
    while(m<=n)
    {
        if((m%7!=0)&&((m-7)%10!=0))
        {
            a++;
        }
        else{
            cout<<m<<' ';
        }
        m++;
    }
    return 0;
}

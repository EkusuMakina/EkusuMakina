#include<stdlib.h>
#include<stdio.h>
#include<iostream>//I don't know why is PE,it's Bubble not Quicksort
using namespace std;
int main()
{
    int a[100];
    int i,j,s,n,t;
    cin>>s;
    for(i=0;i<s;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=s;i++)
    {
        for(j=1;j<=s;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
                n++;
            }
        }
    }
    cout<<n;
    return 0;
}

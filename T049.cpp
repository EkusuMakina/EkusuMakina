#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
    int a[100][100],i,j,m,n,s=0,t=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=2;i<m;i++)
    {
        s=s+a[1][i];
        s=s+a[n][i];
    }
    for(i=1;i<=n;i++)
    {
        s=s+a[i][1];
        s=s+a[i][m];
    }
    for(i=2;i<n;i++)
    {
        for(j=2;j<m;j++)
        {
            t=t+a[i][j];
        }
    }
    s=s-t;
    cout<<s;
    return 0;
}

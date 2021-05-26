#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int m,i,n;
    double sum=0;
    cin>>n>>m;
    for(i=n;i<=m;i++)
    {
        sum=sum+1/pow(i,2.0);
    }
    printf("%.5lf",sum);
    return 0;
}
//我没发现所谓的数据陷阱....

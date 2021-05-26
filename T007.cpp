/*西安出租车的收费标准：起步价（2公里以内，含2公里）为7元钱，
超过2公里且在15公里以内（含15公里）时每公里收费1.5元，超过15公里时每公里收费2.1元，不足1公里按照1公里收费。*/
#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
    int a,A;
    float t;
    cin>>a;
    A=ceil(a)+1;
    if(A<=2)
    {
        t=7;
    }
    if(A>2&&A<=15)
    {

        t=7+(A-2)*1.5;
    }
    if(A>15)
    {
        t=7+(A-15)*2.1+13*1.5;
    }
    printf("%.6f",t);
}

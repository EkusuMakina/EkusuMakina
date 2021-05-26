#include<iostream>
using namespace std;
int main()
{
    int A,B,C,i;
    cin>>A>>B>>C;
    if(A>B)
    {
        i=A;
    }
    else{
        i=B;
    }
    if(i<C)
    {
        i=C;
    }
    cout<<i;
}

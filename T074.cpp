#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j=1,n;
    int A[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(i=0;i<n;i++)
    {
        a=A[i];
        for(j=i;j<n;j++)
        {
            if(A[j]<A[i])
            {
                if(A[j]<A[i])
                {
                    if(a-A[j]==1)
                    {
                        a=A[j];
                    }
                    else{
                        cout<<"NO";
                        goto End;
                    }
                }
            }
        }
    }
    cout<<"Yes";
    End: return 0;
}

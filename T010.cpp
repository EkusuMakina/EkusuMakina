//¸ßËşÅĞ¶ÏÌâ
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    float x,y,z;
    scanf("%f,%f,%f",&x,&y,&
          z);
    if(z<=10)
    {
        if((x-2)*(x-2)+(y-2)*(y-2)>1&&(x+2)*(x+2)+(y-2)*(y-2)>1&&(x-2)*(x-2)+(y+2)*(y+2)>1&&(x+2)*(x+2)+(y+2)*(y+2)>1)
        {
            cout<<0;
        }
        else
        {
            cout<<z;
        }
    }
    else{
        cout<<0;
    }
    return 0;
}

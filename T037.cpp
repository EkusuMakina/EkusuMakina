#include<stdio.h>
int backward(int n)
{
    if(n>10)
    {
        printf("%d",n%10);
        backward(n/10);
    }
    else{
        printf("%d",n);
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    backward(n);
    return 0;
}

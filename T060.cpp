#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n,a=0,b=0,i=0,j=0;
    char A[100000];
    double x;
    while(1)
    {
        scanf("%c",&A[i]);
        if(A[i]=='\n') break;
        i++;
    }
    for(j=0;j<i;j++)
    {
        if(A[j]=='S')
        {
            printf("WA");
            goto DA;
        }
        if(A[j]=='U')
        {
            a++;
        }
        if(A[j]=='D')
        {
            b++;
        }
    }
    x=a*1.0/(a+b)*1.0;
    if(x>0.503||x<0.497)
    {
        printf("Fail");
    }
    else{
        printf("%d/%d",a,a+b);
    }
    DA:return 0;
}

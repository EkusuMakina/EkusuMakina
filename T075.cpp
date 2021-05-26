#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,n,B[1000]={0};
    char A[1000]={0},t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&A[i]);
        B[i]=strlen(A);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(B[i]>B[j])
            {
                t=A[i];
                A[i]=A[j];
                A[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",&A[i]);
    }
    return 0;
}

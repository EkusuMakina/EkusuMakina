#include<stdio.h>
#include<stdlib.h>
int main()
{
    char A[100]={0},*p,x;
    p=A;
    gets(A);
    int i;
    scanf("%c%d",&x,&i);
    for(;*p!='\0';p++);
    for(;p>A+i;p--)
        *p=*(p-1);
    *(A+i)=x;
    puts(A);
    return 0;
}

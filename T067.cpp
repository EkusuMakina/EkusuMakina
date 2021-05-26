#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void key(char s[100])
{
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='A'&&s[i]<='Z') s[i]+=3;
        if(s[i]>='a'&&s[i]<='z') s[i]-=3;
    }
}
int main()
{
    char s[100];
    gets(s);
    key(s);
    puts(s);
    return 0;
}

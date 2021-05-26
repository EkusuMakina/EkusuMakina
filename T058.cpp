#include<stdio.h>
#include<stdlib.h>
#include<string.h>//本代码用于转换罗马数字,不仅用于钟表数字.
int Roma(char* s,int len)
{
	int num=0;
	int flag=0;//flag=0来处理一般情况，flag=1来处理特殊位置
    for (int i=0;i<len;i++)
		{

			switch(*(s+i))
			{
			case 'M':
				num+=1000;
				break;
			case 'D':
				num+=500;
				break;
			case 'C':
				if(i+1<len&&*(s+i+1)=='D'||*(s+i+1)=='M')
				{
					num-=100;
				}
				else
				{
					num+=100;
				}
				break;
			case 'L':
				num+=50;
				break;
			case 'X':
				if(i+1<len&&*(s+i+1)=='L'||*(s+i+1)== 'C')
				{
					num-=10;
				}
				else
				{
					num+=10;
				}
				break;
			case 'V':
				num+=5;
				break;
			case 'I':
				if (i+1<len&&*(s+i+1)=='V'||*(s+i+1)=='X')
				{
					num-=1;
				}
				else
				{
					num+=1;
				}
				break;
			}
		}
	   return num;

	}
int main()
{
	char arr[100]={0};
	scanf("%s", &arr);
	int len=strlen(arr);
	int s=Roma(arr,len);
	printf("%d", s);
	return 0;
}

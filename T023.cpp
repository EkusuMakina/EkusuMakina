#include<iostream>
using namespace std;
int judge(int a,int b)
{
	int flag=0;
	for(int j=a;j<=b;j++)
    {
		for(int k=2;k*k<=j;k++)
		{
			if(j%k==0)
			{
				flag++;
				break;
			}
		}
	}
	return flag;
}
int main()
{
	int m=1671800,n,cnt,count=0;//题目非常意外的告诉了起点1671800
	cin>>n;
	for(int i=1;;i++)
    {
		cnt=judge(m,m+99);
		if(cnt==100)
		{
			count++;
		}
		if(count==n)
		{
			cout<<m<<" "<<m+99;
			break;
		}
		m+=100;
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int i,x,a,z=1;
	scanf("%d%d",&x,&a);
	for(i=1;i<=a;i++)
	{
		z=z*x%1000;
	}
	if(z>=100)
	{
		printf("%d%",z);

	}
	else if(z/100==0)
	{
		printf("00%d",z);
	}
	else
	{
		printf("0%d",z);
	}
}

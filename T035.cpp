#include<stdio.h>
double fact(int num)
{
	double result=num;
	for(int i=num-1;i>0;i--)
    {
		result*=i;
	}
	return result;
}
int main()
{
	int n=0,m=0;
	double a=0,b=0,c=0;
	double result=0;
	scanf("%d %d",&m,&n);
	if(n>m)
    {
        printf("wrong");
    }
    else if(n==m)
    {
		printf("1");
	}else
	{
		a=fact(m);
		b=fact(n);
		c=fact(m-n);
		printf("%1.0f",a/(b*c));
	}
	return 0;
}

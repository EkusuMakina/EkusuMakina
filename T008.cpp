/*����һ������(YYYY-MM-DD)����һ�����ڣ��ж�����һ��ĵڼ��죿

Input

����Ϊ���ͣ��ԡ�-������

Output

���Ϊ����*/
#include<stdio.h>
int main()
{
    int a[12];
    int day,month,year;
    int num=0,i,truenum;
    for(i=1;i<=12;i++)
    {
        a[i]=30;
    }
    a[1]=31;
    a[3]=31;
    a[5]=31;
    a[7]=31;
    a[8]=31;
    a[10]=31;
    a[12]=31;
    a[2]=28;
    scanf("%d-%d-%d",&year,&month,&day);
    if(year%400==0)
    {
        a[2]=29;
    }
    if(year%4==0&&year%100!=0)
    {
        a[2]=29;
    }
    for(i=1;i<=month-1;i++)
    {
        num=a[i]+num;
    }
    truenum=num+day;
    printf("%d",truenum);
}

/*�������⳵���շѱ�׼���𲽼ۣ�2�������ڣ���2���Ϊ7ԪǮ��
����2��������15�������ڣ���15���ʱÿ�����շ�1.5Ԫ������15����ʱÿ�����շ�2.1Ԫ������1���ﰴ��1�����շѡ�*/
#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
    int a,A;
    float t;
    cin>>a;
    A=ceil(a)+1;
    if(A<=2)
    {
        t=7;
    }
    if(A>2&&A<=15)
    {

        t=7+(A-2)*1.5;
    }
    if(A>15)
    {
        t=7+(A-15)*2.1+13*1.5;
    }
    printf("%.6f",t);
}

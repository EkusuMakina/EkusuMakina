/*百分制成绩转换为五分制成绩，转换规则为：90～100：A；80～89：B；70～79：C；60～69：D；60分以下：E。输入百分制成绩，输出对应的五分制成绩。

Input

输入为整型

Output

输出为字符型*/
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a>=90&&a<=100)
    {
        cout<<"A";
    }
    if(a>=80&&a<=89)
    {
        cout<<"B";
    }
    if(a>=70&&a<=79)
    {
        cout<<"C";
    }
    if(a>=60&&a<=69)
    {
        cout<<"D";
    }
    if(a<60)
    {
        cout<<"E";
    }
}

/*�ٷ��Ƴɼ�ת��Ϊ����Ƴɼ���ת������Ϊ��90��100��A��80��89��B��70��79��C��60��69��D��60�����£�E������ٷ��Ƴɼ��������Ӧ������Ƴɼ���

Input

����Ϊ����

Output

���Ϊ�ַ���*/
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

#include<stdio.h>
#include<math.h>
int main()
{
    int j,n;
    double t,a;//������float�ᱬWA,�綾,�������￨��mdһ����,float��ྫȷ��С�������λ?
    j=1;
    scanf("%d",&n);
    while(j<=n)
    {
        a=(pow(2,j)+pow(-1,j))*(pow(2,j+1)+pow(-1,j+1));
        t=t+pow(-1,j-1)*pow(2,j)/a;
        j++;
    }
    printf("%.6f",t);
}

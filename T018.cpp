#include<stdio.h>
#include<math.h>
int main()
{
    int j,n;
    double t,a;//这里用float会爆WA,剧毒,我在这里卡了md一万年,float最多精确到小数点后六位?
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

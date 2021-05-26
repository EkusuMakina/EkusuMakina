#include<stdio.h>
#define PI 3.1415
int main()
{
    float r,h;
    scanf("%f %f",&r,&h);
    printf("%.2f\n",2*PI*r);
    printf("%.2f\n",PI*r*r);
    printf("%.2f\n",4*PI*r*r);
    printf("%.2f\n",4*PI*r*r*r/3);
    printf("%.2f",PI*r*r*h);
    return 0;
}

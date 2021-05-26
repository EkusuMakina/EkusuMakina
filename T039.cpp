#include<stdio.h>
#include<stdlib.h>
int main()
{
    int AH,AM,AS,BH,BM,BS;
    scanf("%d%d%d%d%d%d",&AH,&AM,&AS,&BH,&BM,&BS);
    AH=AH+BH;
    AM=AM+BM;
    AS=AS+BS;
    if(AS>=60)
    {
        AM++;
        AS=AS-60;
    }
    if(AM>=60)
    {
        AH++;
        AM=AM-60;
    }
    printf("%d %d %d",AH,AM,AS);
    return 0;
}

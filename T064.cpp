#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    int ID;
    char name[12];
    int score;
};
int main()
{
    int n;
    struct student s,max;
    FILE *fp;
    scanf("%d",&n);
    fp=fopen("DATA5614.DB","wb+");
    if(!fp) printf("NO!!!");
    while(n--)
    {
        scanf("%d%s%d",&s.ID,s.name,&s.score);
        fwrite(&s,sizeof(struct student),1,fp);
    }
    rewind(fp);
    max.score=0;
    while(!feof(fp))
    {
        fread(&s,sizeof(struct student),1,fp);
        if(s.score>max.score)
        {
            max.ID=s.ID;
            max.score=s.score;
            strcpy(max.name,s.name);
        }
    }
    fclose(fp);
    printf("%d %s %d",max.ID,max.name,max.score);
}

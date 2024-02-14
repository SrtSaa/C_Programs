#include<stdio.h>

typedef struct student
{
    char name[20];
    int roll;
    float marks;
}stu;
int main()
{
    int i,n;
    stu sdata[3];
    for(i=0;i<2;i++)
    {
        printf("\nEnter data for %dth entry:\n",i+1);
        printf("Enter name: ");
        scanf("%s",&sdata[i].name);
        printf("Enter roll: ");
        scanf("%d",&sdata[i].roll);
        printf("Enter marks: ");
        scanf("%f",&sdata[i].marks);
    }
    printf("\n\n\tname\troll\tmarks\n\n");
    for(i=0;i<2;i++)
        printf("\t%s\t%d\t%.2f\n",sdata[i].name,sdata[i].roll,sdata[i].marks);
}


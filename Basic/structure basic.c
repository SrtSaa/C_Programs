#include<stdio.h>
#include<string.h>

typedef struct student
{
    char name[20];
    int roll;
    float marks;
}stu;

void display(char x[], int y, float z)
{
    printf("\t%s\t%d\t%.2f\n",x,y,z);
}
void displa(stu x)
{
    printf("\t%s\t%d\t%.2f\n",x.name,x.roll,x.marks);
}
void bonus(stu x)
{
    x.marks=x.marks+5;
    displa(x);
}

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

    stu s1={"k",3,3};
    stu s2;

    //s2.name={'ldf'};  //can't do that
    strcpy(s2.name,"l");
    s2.roll=4;
    s2.marks=4.5;

    display(s1.name,s1.roll,s1.marks);
    displa(s2);
    bonus(s1);
}


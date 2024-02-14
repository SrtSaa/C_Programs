//Union by rank  (srt_saa)

#include<stdio.h>

int a[4][20], b[4][20];
int n1,n2,i,j,x,y,max=0,root,f1,f2,r1,r2,p,q;

void input();
int find(int [][20],int,int);
int rank(int [][20],int,int,int*);
int r(int [][20],int,int);
void uni(int, int);
void display(int [][20],int);

int main()
{
    input();

    uni(p,q);
}

void input()
{
    printf("Enter the no of element in set A: ");
    scanf("%d",&n1);
    printf("Enter child-parent node no. for set A:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d%d",&a[0][i],&a[1][i]);
        a[2][i]=a[3][i]=0;
    }

    printf("\nEnter the no of element in set B: ");
    scanf("%d",&n2);
    printf("Enter child-parent node no. for set B:\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d%d",&b[0][i],&b[1][i]);
        b[2][i]=b[3][i]=0;
    }

    printf("\n\nFor union operation,\n");
    printf("Enter an element which is present in set A: ");
    scanf("%d",&p);
    printf("Enter an element which is present in set B: ");
    scanf("%d",&q);
}

int find(int s[][20], int z, int n)
{
    for(i=0;i<n;i++)
        if(z==s[0][i])
        {
            return i;
            break;
        }
    return -1;
}

int rank(int s[][20], int z, int n, int *f)
{
    int m= *f;
    while(s[0][m]!=s[1][m])
        m=find(s,s[1][m],n);

    s[2][m]=0;
    s[3][m]=1;
    *f=m;

    for(i=0;i<n;i++)
        if(s[3][i]!=1)
            s[2][i]=r(s,i,n);

    max=0;
    for(i=0;i<n;i++)
        if(s[2][i]>max)
            max=s[2][i];
    return max;
}

int r(int s[][20], int m, int n)
{
    int st;
    if(s[3][m]==1)
        return s[2][m];
    else
    {
        st=r(s,find(s,s[1][m],n),n)+1;
        s[2][m]=st;
        s[3][m]=1;
    }
    return st;
}

void uni(int x, int y)
{
    f1=find(a,x,n1);
    f2=find(b,y,n2);
    if(f1!=-1&&f2!=-1)
    {
        printf("\n\nBefore union:\n\nSet A:");
        display(a,n1);
        printf("\nSet B:");
        display(b,n2);

        r1=rank(a,x,n1,&f1);
        r2=rank(b,y,n2,&f2);

        if(r1>r2)
            b[1][f2]=a[0][f1];
        else
            a[1][f1]=b[0][f2];

        printf("\n\nAfter union:\n\nSet A:");
        display(a,n1);
        printf("\nSet B:");
        display(b,n2);
    }
    else
        printf("\nEntered data is not present in the given sets.\n");
}

void display(int s[][20], int n)
{
    printf("\nChild:\t");
    for(i=0;i<n;i++)
        printf("%d\t",s[0][i]);
    printf("\nParent:\t");
    for(i=0;i<n;i++)
        printf("%d\t",s[1][i]);
    printf("\n");
}

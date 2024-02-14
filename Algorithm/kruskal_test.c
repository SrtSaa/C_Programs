//Kruskal Algorithm _test (loop problem)

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int n,e,v,i=0;
int** a;
int* p;

void ip();
void Q_sort(int,int);
void kur();
void parent(int, int);

int main()
{

    int a[n][n];

    ip();
    kur();
}

void ip()
{
    int i,j;
    printf("Enter the number of vertex: ");
    scanf("%d",&n);
    printf("Enter the number of edge: ");
    scanf("%d",&e);

    a=(int**)malloc(3*sizeof(int*));
    for(i=0;i<3;i++)
        a[i]=(int*)malloc(e*sizeof(int));

    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        p[i]=i;

    printf("Enter your data: (edge-edge-weight)\n");
    for(i=1;i<=e;i++)
        scanf("%d%d%d",&a[0][i-1],&a[1][i-1],&a[2][i-1]);

    printf("\nYour data is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<e;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }

    Q_sort(0,e-1);

    printf("\nYour sorted data is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<e;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
}

void Q_sort(int x, int y)
{
    int s,e,j,f;
    s=x;
    e=y;
    while(s!=e)
    {
        if(a[2][s]>a[2][e])
        {
            j=a[2][s];
            a[2][s]=a[2][e];
            a[2][e]=j;
            j=a[1][s];
            a[1][s]=a[1][e];
            a[1][e]=j;
            j=a[0][s];
            a[0][s]=a[0][e];
            a[0][e]=j;

            if(f==0)
                f++;
            else
                f--;
        }
        if(f==0)
            s++;
        else
            e--;
    }
    if(x!=e)
        Q_sort(x,s-1);
    if(y!=s)
        Q_sort(s+1,y);
}

void parent(int x, int y)
{
    if(p[x]==x&&p[y]==y)
    {
        if(x<y)
            p[y]=x;
        else
            p[x]=y;
    }
    else
    {
        if(p[x]==x)
            p[x]=p[y];
        if(p[y]==y)
            p[y]=p[x];
    }
}
void kur()
{
    int j,x,y,cost=0;
    //Q_sort(0,e-1);

    printf("\ni= %d,\t n-1= %d",i,n-1);
    x=n-1;
    for(i=0;i<n+3;)
    //while(i<x)
    {
        if(p[a[0][i]-1]==p[a[1][i]-1])
        {
            //i--;
            continue;
        }
        cost+=a[2][i];
        parent(a[0][i]-1,a[1][i]-1);
        //printf("\ni= %d\tcost= %d\tn1= %d\tn2= %d\n",i,cost,a[0][i],a[1][i]);
        /*for(j=0;j<n;j++)
            printf("%d\t",p[j]);*/


        //i++;
        printf("\ni= %d,\t n-1= %d",i,x);

    }
    printf("\n\ncost=%d",cost);
}

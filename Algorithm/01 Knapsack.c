//01 Knapsack

#include<stdio.h>
#include<stdlib.h>

int n,w;
int** a;
int** s;

void ip();
void sort();
int zoks(int,int);
int max(int,int);

int main()
{
    int x;
    ip();
    x= zoks(n,w);
    printf("%d",x);
}

void ip()
{
    int i,j;
    printf("Enter the no of data: ");
    scanf("%d",&n);
    a=(int**)malloc(2*sizeof(int*));
    for(i=0;i<2;i++)
        a[i]=(int*)malloc(n*sizeof(int));

    printf("Enter profit, weight:\n");
    for(i=0;i<n;i++)
        scanf("%d%d",&a[0][i],&a[1][i]);

    printf("\nData:\n");
    for(j=0;j<2;j++)
    {
        for(i=0;i<n;i++)
            printf("%d\t",a[j][i]);
        printf("\n");
    }
    sort();

    printf("\nEnter total weight: ");
    scanf("%d",&w);
    s=(int**)malloc((n+1)*sizeof(int*));
    for(i=0;i<=n;i++)
        s[i]=(int*)malloc((w+1)*sizeof(int));
    for(i=0;i<=n;i++)
        for(j=0;j<=w;j++)
            s[i][j]=-1;
}

void sort()
{
    int i,j,min,c;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[1][j]<a[1][min])
                min=j;
            else if(a[1][j]==a[1][min])
                if(a[0][j]>a[0][min])
                    min=j;
        }
        for(j=0;j<2;j++)
        {
            c=a[j][i];
            a[j][i]=a[j][min];
            a[j][min]=c;
        }
    }
}

int zoks(int m, int wt)
{
    if(m<=0||wt<=0)
        return 0;
    if(s[m][wt]!=-1)
        return s[m][wt];
    else
    {
        if(a[1][m-1]>wt)
            s[m][wt] = zoks(m-1,wt);
        else
            s[m][wt] = max(zoks(m-1,wt),(zoks(m-1,wt-a[1][m-1])+a[0][m-1]));
        return s[m][wt];
    }
}

int max(int x,int y)
 {
    if(y>x)
        return y;
    else
        return x;
 }

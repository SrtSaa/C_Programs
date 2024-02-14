//Dijkstra's Algorithm (srt_saa)

#include<stdio.h>
#include<limits.h>

//int a[10][10]={0,1,3,5,0,0,0,0,0,0,1,0,0,2,2,0,0,0,0,0,3,0,0,2,0,0,1,0,0,0,5,2,2,0,1,3,3,1,0,0,0,2,0,1,0,1,0,0,0,0,0,0,0,3,1,0,0,2,4,0,0,0,1,3,0,0,0,2,0,1,0,0,0,1,0,2,2,0,2,3,0,0,0,0,0,4,0,2,0,2,0,0,0,0,0,0,1,3,2,0};
//int a[5][5]={0,6,0,1,0,6,0,5,2,2,0,5,0,0,5,1,2,0,0,1,0,2,5,1,0};

int n,e,x;

void dij(int [][n]);
void ip(int [][n]);

int main()
{
    printf("Enter no of nodes: ");
    scanf("%d",&n);

    int a[n][n];

    ip(a);
    dij(a);
}

void ip(int x[][n])
{
    int i,j,k,m;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(j==i)
                x[i][j]=0;
            else
                x[i][j]=INT_MAX;
        }

    printf("Enter no of edges: ");
    scanf("%d",&e);
    printf("Enter the weight of edges: (Edge  Edge Weight)\n");
    for(i=0;i<e;i++)
    {
        scanf("%d%d%d",&j,&k,&m);
        x[j-1][k-1]=m;
        x[k-1][j-1]=m;
    }

    printf("\nAdjacency matrix is:\n");
    for(i=0;i<n;i++)
        printf("\t%d",i);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d\t",i);
        for(j=0;j<n;j++)
        {
            if(x[i][j]==INT_MAX)
                printf("inf\t");
            else
                printf("%d\t",x[i][j]);
        }
    }
    printf("\n\n\n");
}

void dij(int a[][n])
{
    int l,i,j,k,m;
    int b[n], c[n];

    for(i=0;i<n;i++)
    {
        b[i]=INT_MAX;
        c[i]=INT_MAX;
    }

    printf("\nEnter starting vertex: ");
    scanf("%d",&x);
    x--;
    l=x;
    b[x]=0;
    for(i=0;i<n-1;i++)
    {
        c[x]=1;
        m=INT_MAX;

        for(j=0;j<n;j++)
            if(a[x][j]!=0)
                if(a[x][j]+b[x]<b[j])
                    b[j]=a[x][j]+b[x];

        for(j=0;j<n;j++)
            printf("%d\t",b[j]);

        for(j=0;j<n;j++)
            if(b[j]<m&&c[j]==INT_MAX)
            {
                m=b[j];
                k=j;
            }
        x=k;
        printf("\n");
    }
    for(i=0;i<n;i++)
        printf("Smallest distance from %d to %d is %d.\n",l+1,i+1,b[i]);
}

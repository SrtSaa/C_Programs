//Prim's Algorithm (srt_saa)

#include<stdio.h>
#include<limits.h>

int n,e,v;

void ip(int [][n]);
void prim(int [][n]);

int main()
{
    printf("Enter no of nodes: ");
    scanf("%d",&n);

    int a[n][n];

    ip(a);
    prim(a);
}

void ip(int x[][n])
{
    int i,j,k,m;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            /*if(j==i)
                x[i][j]=0;
            else*/
                x[i][j]=INT_MAX;
        }

    printf("Enter no of edges: ");
    scanf("%d",&e);
    printf("Enter the weight of edges: (Node  Node  Weight)\n");
    for(i=0;i<e;i++)
    {
        scanf("%d%d%d",&j,&k,&m);
       // x[j-1][k-1]=m;
       // x[k-1][j-1]=m;
       x[j][k]=m;
        x[k][j]=m;
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
    printf("\n\n");
    printf("Enter starting vertex: ");
    scanf("%d",&v);
    //v--;
}

void prim(int x[][n])
{
    int i,j,m=INT_MAX,cost=0,k,l,r,t;
    int b[n],c[n];
    int st[n][n];

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            st[i][j]=0;

    for(i=0;i<n;i++)
    {
        b[i]=INT_MAX;
        c[i]=INT_MAX;
    }

    b[0]=v;
    c[v]=1;
    for(i=0;i<n-1;i++)
    {
        m=INT_MAX;
        for(j=0;j<=i;j++)
        {
            l=b[j];
            for(k=0;k<n;k++)
            {
                if((c[k]==1)||(x[l][k]==INT_MAX)||(l==k))
                    continue;
                if(x[l][k]<m)
                {
                    m=x[l][k];
                    t=k;
                    r=l;
                }
            }
        }
        cost+=m;
        b[i+1]=t;
        c[t]=1;
        st[r][t]=m;
        st[t][r]=m;
    }
    printf("\n\nCost of minimum spanning tree = %d\n",cost);
    printf("\nAdjacency matrix of minimum spanning tree is:\n");
    for(i=0;i<n;i++)
        printf("\t%d",i);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d\t",i);
        for(j=0;j<n;j++)
            printf("%d\t",st[i][j]);
    }
}

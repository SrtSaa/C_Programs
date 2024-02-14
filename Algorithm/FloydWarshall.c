//Floyd-Warshall Algorithm (edit: srt_saa)

#include<stdio.h>
#define M 99999

int n,e,i,j,k,m;

int main()
{
    //taking input
    printf("Enter no of nodes and edges:\n");
    scanf("%d%d",&n,&e);

    int x[n][n];

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(j==i)
                x[i][j]=0;
            else
                x[i][j]=M;
        }

    printf("Enter the weight of edges: (Edge  Edge Weight)\n");
    for(i=0;i<e;i++)
    {
        scanf("%d%d%d",&j,&k,&m);
        x[j-1][k-1]=m;
        //x[k-1][j-1]=m;
    }

    //print adjacency matrix
    printf("\nAdjacency matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(x[i][j]==M)
                printf("inf\t");
            else
                printf("%d\t",x[i][j]);
        }
        printf("\n");
    }

    //Floyd Warshall algorithm
    for(k=0;k<n;k++)
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                if(x[i][k]+x[k][j]<x[i][j])
                    x[i][j]=x[i][k]+x[k][j];

    //Print output
    printf("\nAll pair shortest path:\n\n");
    for(i=0;i<n;i++)
        printf("\t%d",i+1);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d",i+1);
        for(j=0;j<n;j++)
            printf("\t%d",x[i][j]);
    }
}

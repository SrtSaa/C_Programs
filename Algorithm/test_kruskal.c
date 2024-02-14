#include<stdio.h>

int i,j,k,a,b,u,v,n,ne=1,e,m;
int min,mincost=0;

int find(int,int []);
int uni(int,int,int []);

void main()
{
	printf("\nEnter the no. of vertices: ");
	scanf("%d",&n);
	printf("Enter no of edges: ");
    scanf("%d",&e);
	int cost[n][n],p[n];

	for(i=0;i<n;i++)
    {
        p[i]=0;
        for(j=0;j<n;j++)
            cost[i][j]=999;
    }

    printf("Enter the weight of edges: (Edge  Edge Weight)\n");
    for(i=0;i<e;i++)
    {
        scanf("%d%d%d",&j,&k,&m);
        cost[j-1][k-1]=m;
        cost[k-1][j-1]=m;
    }

	printf("\nThe edges of Minimum Cost Spanning Tree are\n");
	while(ne < n)
	{
		for(i=0,min=999;i<n;i++)
			for(j=0;j<n;j++)
				if(cost[i][j] < min)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
		u=find(u,p);
		v=find(v,p);
		if(uni(u,v,p))
		{
			printf("%d edge (%d,%d) = %d\n",ne++,a,b,min);
			mincost +=min;
		}
		cost[a][b]=cost[b][a]=999;
	}
	printf("\n\tMinimum cost = %d\n",mincost);
}

int find(int i,int parent[])
{
	while(parent[i])
        i=parent[i];
	return i;
}

int uni(int i,int j,int parent[])
{
	if(i!=j)
	{
		parent[j]=i;
		return 1;
	}
	return 0;
}

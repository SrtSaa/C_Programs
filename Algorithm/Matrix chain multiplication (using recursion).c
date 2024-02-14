//Matrix Chain Multiplication (using recursion)   (srt_saa)

#include<stdio.h>

int n;
int mcm(int [][n],int [],int,int);

int main()
{
    int i,j,r;
    printf("Enter a number of matrices: ");
    scanf("%d",&n);
    n++;
    int a[n][n],d[n];                   //array a is required for using dp, otherwise not
    printf("Enter the sizes:\n");
    for(i=0;i<n;i++)
        scanf("%d",&d[i]);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            a[i][j]=0;
    r=mcm(a,d,1,n-1);
    printf("Ans= %d",r);
}

//Without using dp
int mcm(int x[][n], int m[], int p, int q)
{
    int i,s,u,t,min=99999;
    if(p==q)
        return 0;

    for(i=p;i<q;i++)
    {
        s=mcm(x,m,p,i)+mcm(x,m,i+1,q)+m[p-1]*m[i]*m[q];
        if(s<min)
            min=s;
    }
    return min;
}

//using dp
/*
int mcm(int x[][n], int m[], int p, int q)
{
    if(p==q)
        return 0;
    else if(x[p][q]==0)
    {
        int i,s,min=99999;
        for(i=p;i<q;i++)
        {
            s=mcm(x,m,p,i)+mcm(x,m,i+1,q)+m[p-1]*m[i]*m[q];
            if(s<min)
                min=s;
        }
        x[p][q]=min;
        return min;
    }
    else
        return x[p][q];
}
*/


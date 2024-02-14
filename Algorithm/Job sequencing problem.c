//Job sequencing problem (srt_saa)

#include<stdio.h>
#include<stdlib.h>

int** a;
int* t;
int n,x;

void ip();
void sort();
void job();

int main()
{
    ip();
    job();
}

void ip()
{
    int i,j;
    printf("Enter the no of data: ");
    scanf("%d",&n);
    a=(int**)malloc(3*sizeof(int*));
    for(i=0;i<3;i++)
        a[i]=(int*)malloc(n*sizeof(int));

    printf("Enter the deadline and profit:\n");
    for(i=0;i<n;i++)
    {
        a[0][i]=i+1;
        scanf("%d%d",&a[1][i],&a[2][i]);
    }

    printf("Enter total unit of time: ");
    scanf("%d",&x);
    t=(int*)malloc(x*sizeof(int));
    for(j=0;j<x;j++)
        t[j]=0;

    sort();
}

void sort()
{
    int i,j,max,c;
    for(i=0;i<n;i++)
    {
        max=i;
        for(j=i+1;j<n;j++)
        {
            if(a[2][j]>a[2][max])
                max=j;
            else if(a[2][j]==a[2][max])
                if(a[1][j]<a[1][max])
                    max=j;
        }
        for(j=0;j<3;j++)
        {
            c=a[j][i];
            a[j][i]=a[j][max];
            a[j][max]=c;
        }
    }
}

void job()
{
    int i,j,m,p=0;
    for(i=0;i<n;i++)
    {
        m=a[1][i];
        for(j=m-1;j>=0;j--)
            if(t[j]==0)
            {
                t[j]=a[0][i];
                p+=a[2][i];
                break;
            }
    }
    printf("\nThe job indexes that should be done to maximize profit:\n");
    for(j=0;j<x;j++)
        printf("%d\t",t[j]);
    printf("\n\nTotal Profit= %d\n",p);
}

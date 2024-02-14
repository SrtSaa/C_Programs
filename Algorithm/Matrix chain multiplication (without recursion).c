//Matrix chain multiplication (without recursion) (srt_saa)

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

//int d[6]={2,3,1,10,4,1};

int main()
{

    int i,j,k=0,n=6,min,l,x;

    printf("Enter the number of matrix to be multiplied: ");
    scanf("%d",&n);
    n++;
    int** a=(int**)malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
        a[i]=(int*)malloc(n*sizeof(int));
    for(i=1;i<n;i++)
        for(j=1;j<n;j++)
            a[i][j]=0;

    int* d=(int*)malloc(n*sizeof(int));
    printf("Enter the size of matrix sequentially:\n");
    for(i=0;i<n;i++)
        scanf("%d",&d[i]);


    i=1;
    x=1;
    while(i>0)
    {
        j=x+1;
        while(j<n)
        {
            min=INT_MAX;
            for(k=i;k<j;k++)
            {
                l=a[i][k]+a[k+1][j]+(d[i-1]*d[k]*d[j]);
                //printf("a[%d][%d]=%d\ta[%d][%d]=%d\td[%d]*d[%d]*d[%d]=%d\tl=%d\n",i,k,a[i][k],k+1,j,a[k+1][j],i-1,k,j,(d[i-1]*d[k]*d[j]),l);
                if(l<min)
                    min=l;
            }
            a[i][j]=min;
            //printf("%d\t",a[i][j]);
            i++;
            j++;
        }
        x++;
        if(i==2&&j==n)
            break;
        i=1;
        //printf("\n");
    }
    printf("\n");
    printf("Minimum number of multiplication required: %d\n",a[1][n-1]);
}

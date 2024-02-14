//Delete the row which pairwise multiplication among all the element is minimum.

#include<stdio.h>
#include<limits.h>

int main()
{
    int a[10][10],b[50],min;
    int m,n,i,j,k,sum;

    printf("\nEnter the no of row and column: ");
    scanf("%d%d",&i,&j);
    while(1)
    {
        if(i<4||j<4)
        {
            printf("Row and column number must be greater or equal to 4.\n");
            printf("Enter the no of row and column: ");
            scanf("%d%d",&i,&j);
            continue;
        }
        break;
    }
    m=i;
    n=j;

    printf("\nGive data in the matrix:\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            printf("Enter element in row %d column %d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    printf("\nYour array is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("\n\n");

    for(i=0;i<m;i++)
    {
        min=INT_MAX;
        for(j=0;j<n-1;j++)
            for(k=j+1;k<n;k++)
                if(a[i][j]*a[i][k]<min)
                {
                    min=a[i][j]*a[i][k];
                    b[i]=min;
                }
    }
    printf("Minimum multiplication among pairs of each row:\n");
    for(i=0;i<m;i++)
        printf("%d\t",b[i]);

    k=b[0];
    min=0;
    for(i=1;i<m;i++)
        if(b[i]<k)
        {
            min=i;
            k=b[i];
        }
    printf("\nmin= %d",k);

    for(i=min;i<m;i++)
        for(j=0;j<n;j++)
            a[i][j]=a[i+1][j];

    printf("\n\nYour new array is:\n");
    for(i=0;i<m-1;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
}

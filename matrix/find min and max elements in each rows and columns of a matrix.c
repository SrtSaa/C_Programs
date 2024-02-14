//find min and max elements in each rows and columns of a matrix

#include<stdio.h>
#include<limits.h>

int main()
{
    int a[10][10];
    int m,n,min,min2,max,max2,i,j;

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

    printf("\nGive data in the array:\n");
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
        min=min2=INT_MAX, max=max2=INT_MIN;
        for(j=0;j<n;j++)
        {
            if(min>a[i][j])
                min=a[i][j];
            if(max<a[i][j])
                max=a[i][j];

            if(min2>a[j][i])
                min2=a[j][i];
            if(max2<a[j][i])
                max2=a[j][i];
        }
        printf("Row %d:  max=%d  min=%d\t\t",i+1,max,min);
        printf("Column %d:  max=%d  min=%d\n",i+1,max2,min2);
    }
}

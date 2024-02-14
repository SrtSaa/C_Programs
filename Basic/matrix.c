//Matrix addition, subtraction, multiplication, transverse

#include<stdio.h>


int main()
{
    int a[10][10],b[10][10],d[10][10],e[10][10],m,n,r,c,i,j,k,sum=0;


    //Create matrix A
    printf("for matrix A:\n");
    printf("Enter the no of row: ");
    scanf("%d",&m);
    printf("Enter the no of column:");
    scanf("%d",&n);

    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            printf("Enter the element of row %d column %d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }

    printf("\nThe A matrix is: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
           printf("%4d",a[i][j]);
        printf("\n");
    }


/*
    //Create matrix B
    printf("\nfor matrix B:\n");
    printf("Enter the no of row: ");
    scanf("%d",&r);
    printf("Enter the no of column:");
    scanf("%d",&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        {
            printf("Enter the element of row %d column %d: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }

    printf("\nThe B matrix is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
           printf("%4d",b[i][j]);
        printf("\n");
    }



    //Addition
    if(m==r && n==c)
    {
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                d[i][j]=a[i][j]+b[i][j];
        printf("\nafter addition matrix is: \n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
               printf("%4d",d[i][j]);
            printf("\n");
        }
    }



    //Subtraction
    if(m==r && n==c)
    {
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                d[i][j]=a[i][j]-b[i][j];
        printf("\nafter subtraction matrix is: \n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
               printf("%4d",d[i][j]);
            printf("\n");
        }
    }



    //Multiplication
    if(n==r)
    {
        for(i=0;i<m;i++)
            for(j=0;j<c;j++)
            {
                sum=0;
                for(k=0;k<r;k++)
                    sum+=(a[i][k]*b[k][j]);
                e[i][j]=sum;
            }
        printf("\nafter multiplication matrix is: \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<c;j++)
               printf("%4d",e[i][j]);
            printf("\n");
        }
    }


*/
    //Transpose
    printf("\nTranspose of A matrix is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
           e[i][j]=a[j][i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
           printf("%4d",e[i][j]);
        printf("\n");
    }

    return 100;
}


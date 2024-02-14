#include<stdio.h>
#include<stdlib.h>

void create(int, int, int [][10]);
void display(int, int, int [][10]);
void addi(int, int, int [][10], int, int, int [][10], int [][10]);
void subt(int, int, int [][10], int, int, int [][10], int [][10]);
void multi(int, int, int [][10], int, int, int [][10], int [][10]);
void trans(int, int, int [][10], int [][10]);

int main()
{
    int a[10][10], b[10][10], add[10][10], sub[10][10], mul[10][10], tran[10][10], m=0,n=0,r=0,c=0;
    printf("Size of the matrix is 10 X 10.\nCreate matrix according to its size.\n\n");


    printf("\nFor matrix A:\n");
    printf("Enter the no of row: ");
    scanf("%d",&m);
    printf("Enter the no of column: ");
    scanf("%d",&n);
    create(m,n,a);
    printf("\nThe A matrix is:\n");
    display(m,n,a);


    printf("\n\nFor matrix B:\n");
    printf("Enter the no of row: ");
    scanf("%d",&r);
    printf("Enter the no of column: ");
    scanf("%d",&c);
    create(r,c,b);
    printf("\nThe B matrix is:\n");
    display(r,c,b);


    addi(m,n,a,r,c,b,add);
    subt(m,n,a,r,c,b,sub);
    multi(m,n,a,r,c,b,sub);
    printf("\nTranspose of matrix A is:\n");
    trans(m,n,a,tran);
    printf("\n\nTranspose of matrix B is:\n");
    trans(r,c,b,tran);

    return 100;
}

void create(int m, int n, int arr[][10])
{
    if((m>0&&m<=10) && (n>0&&n<=10))
    {
        int i,j;
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
            {
                printf("Enter the element of row %d column %d: ",i+1,j+1);
                scanf("%d",&arr[i][j]);
            }
    }
    else
        printf("\nRow and column must be under 1-10.\n");
}

void display(int m, int n, int a[][10])
{
    if(m==0 || n==0)
        printf("Please insert data in the matrix.");
    else
    {
        int i,j;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
               printf("%4d",a[i][j]);
            printf("\n");
        }
    }
}

void addi(int a, int b, int x[][10], int c, int d, int y[][10], int z[][10])
{
    int i, j;
    if(a==c && b==d)
    {
        for(i=0;i<a;++i)
            for(j=0;j<d;++j)
                z[i][j]=x[i][j]+y[i][j];
        printf("\nAddition of two matrices is:\n");
        display(a, b, z);
    }
    else
        printf("\nRows as well as columns must be same in the both matrices for addition operation\n");
}

void subt(int a, int b, int x[][10], int c, int d, int y[][10], int z[][10])
{
    int i, j;
    if(a==c && b==d)
    {
        for(i=0;i<a;++i)
            for(j=0;j<d;++j)
                z[i][j]=x[i][j]-y[i][j];
        printf("\nSubtraction of two matrices(A-B) is:\n");
        display(a, b, z);
    }
    else
        printf("\nRows as well as columns must be same in the both matrices for subtraction operation\n");
}

void multi(int m, int n, int a[][10], int r, int c, int b[][10], int mul[][10])
{
        int i,j,k,sum;
        if(n==r)
        {
            for(i=0;i<m;i++)
                for(j=0;j<c;j++)
                {
                    sum=0;
                    for(k=0;k<r;k++)
                        sum+=(a[i][k]*b[k][j]);
                    mul[i][j]=sum;
                }
            printf("\nafter multiplication matrix is: \n");
            display(m,c,mul);
        }
        else
            printf("Error.");
}

void trans(int m, int n, int a[][10], int tran[][10])
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
           tran[i][j]=a[j][i];
    display(n,m,tran);
}

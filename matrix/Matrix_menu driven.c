//Matrix (menu driven)

#include<stdio.h>
#include<stdlib.h>

void menu();
int choice();
int get(char []);
void create(int *, int *, int [][10], char, char [], char []);
void display(int, int, int [][10], char);
void display2(int, int, int [][10]);
int valid(int, int, char);
void addi(char, int, int, int [][10], char, int, int, int [][10], int [][10]);
void subt(char, int, int, int [][10], char, int, int, int [][10], int [][10]);
void multi(char, int, int, int [][10], char, int, int, int [][10], int [][10]);
void trans(int, int, int [][10], int [][10], char);
void duplicate(int *, int *, int [][10], int [][10], char);
void edit(int, int, int [][10], char);
void de();
void reset(int *, int *, char);


int main()
{
    int x[10][10], y[10][10], add[10][10], sub[10][10], mul[10][10], tran[10][10], r1=0,c1=0,r2=0,c2=0,i,j,k=0,ch;
    char a='A', b='B', r[]="row", c[]="column";
    printf("Size of the matrix is 10 X 10.\nCreate matrix according to its size.\n\n");
    while(1)
    {
        if(k%3==0) menu();
        printf("\n\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                while(5)
                {
                    printf("\nFor data entry, ");
                    i=choice();
                    switch(i)
                    {
                        case 1: create(&r1,&c1,x,a,r,c);    break;
                        case 2: create(&r2,&c2,y,b,r,c);    break;
                        case 3: create(&r1,&c1,x,a,r,c);    create(&r2,&c2,y,b,r,c);    break;
                        case 4: break;
                        default: de();
                    }
                    if(i==1|| i==2 || i==3 || i==4) break;
                }
                break;

            case 2:
                while(5)
                {
                    i=choice();
                    switch(i)
                    {
                        case 1: display(r1,c1,x,a);    break;
                        case 2: display(r2,c2,y,b);    break;
                        case 3: display(r1,c1,x,a);    display(r2,c2,y,b);    break;
                        case 4: break;
                        default: de();
                    }
                    if(i==1|| i==2 || i==3 || i==4) break;
                }
                break;

            case 3: addi(a,r1,c1,x,b,r2,c2,y,add);      break;

            case 4: subt(a,r1,c1,x,b,r2,c2,y,sub);      break;

            case 5: multi(a,r1,c1,x,b,r2,c2,y,mul);     break;

            case 6:
                while(5)
                {
                    i=choice();
                    switch(i)
                    {
                        case 1: trans(r1,c1,x,tran,a);  break;
                        case 2: trans(r2,c2,y,tran,b);  break;
                        case 3: trans(r1,c1,x,tran,a);  trans(r2,c2,y,tran,b);  break;
                        case 4: break;
                        default: de();
                    }
                    if(i==1 || i==2 || i==3 || i==4)    break;
                }
                break;

            case 7:
                while(5)
                {
                    i=choice();
                    switch(i)
                    {
                        case 1: trans(r1,c1,x,tran,a);  duplicate(&r1,&c1,x,tran,a);  break;
                        case 2: trans(r2,c2,y,tran,b);  duplicate(&r2,&c2,y,tran,b);  break;
                        case 3: trans(r1,c1,x,tran,a);  duplicate(&r1,&c1,x,tran,a);
                                trans(r2,c2,y,tran,b);  duplicate(&r2,&c2,y,tran,b);  break;
                        case 4: break;
                        default: de();
                    }
                    if(i==1|| i==2 || i==3 || i==4)   break;
                }
                break;

            case 8:
                while(5)
                {
                    i=choice();
                    switch(i)
                    {
                        case 1: edit(r1,c1,x,a);    break;
                        case 2: edit(r2,c2,y,b);    break;
                        case 3: edit(r1,c1,x,a);    edit(r2,c2,y,b);    break;
                        case 4: break;
                        default: de();
                    }
                    if(i==1 || i==2 || i==3 || i==4)    break;
                }
                break;

            case 0:
                while(5)
                {
                    i=choice();
                    switch(i)
                    {
                        case 1: reset(&r1,&c1,a);   break;
                        case 2: reset(&r2,&c2,b);   break;
                        case 3: reset(&r1,&c1,a);   reset(&r2,&c2,b);   break;
                        case 4: break;
                        default: de();
                    }
                    if(i==1|| i==2 || i==3 || i==4)   break;
                }
                break;

            case 11: exit(1);
            default: de();
        }
        k++;
    }

    return 100;
}

void menu()
{
    printf("\n1. Create & Display matrix.");
    printf("\n2. Display matrix.");
    printf("\n3. Addition of matrix A and B.");
    printf("\n4. Subtraction of matrix A and B.");
    printf("\n5. multiplication of matrix A and B.");
    printf("\n6. Transpose of matrix.");
    printf("\n7. Replace a matrix with its transpose.");
    printf("\n8. Edit a matrix.");
    printf("\n0. Reset matrix.");
    printf("\n11. Exit.\n");
}

int choice()
{
    int ch;
    printf("choose matrix:\n1. A\t\t2. B\t\t3. Both\t\t4. Back to main menu.\n");
    printf("Enter your option: ");
    scanf("%d",&ch);
    return ch;
}

int get(char c[])
{
    int x;
    while(1)
    {
        printf("Enter the no of %s: ",c);
        scanf("%d",&x);
        if(x>0&&x<=10)
            return x;
        else
            printf("\nRow and column must be under 1-10.\n\n");
    }
}

void create(int *m, int *n, int arr[][10], char d, char r[], char c[])
{
    printf("\nFor matrix %c:\n",d);
    *m=get(r);
    *n=get(c);
    int i,j;
    for(i=0;i<*m;i++)
        for(j=0;j<*n;j++)
        {
            printf("Enter the element of row %d column %d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    display(*m,*n,arr,d);
}

void display(int m, int n, int a[][10], char c)
{
    if(m==0 || n==0)
        printf("Please insert data in the matrix %c.\n",c);
    else
    {
        int i,j;
        printf("\nThe %c matrix is:\n",c);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
               printf("%4d",a[i][j]);
            printf("\n");
        }
    }
}

void display2(int m, int n, int a[][10])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
           printf("%4d",a[i][j]);
        printf("\n");
    }
}

int valid(int a, int b, char c)
{
    if(a==0 || b==0)
    {
        printf("\nPlease insert data in the matrix %c.\n",c);
        return 0;
    }
    else
        return 1;
}

void addi(char m, int a, int b, int x[][10], char n, int c, int d, int y[][10], int z[][10])
{
    int i,j,k;
    k=valid(a,b,m)*valid(c,d,n);
    if(k==1)
    {
        if(a==c && b==d)
        {
            for(i=0;i<a;++i)
                for(j=0;j<d;++j)
                    z[i][j]=x[i][j]+y[i][j];
            printf("\nAddition of two matrices is:\n");
            display2(a, b, z);
        }
        else
            printf("\nRows as well as columns must be same in the both matrices for addition operation\n");
    }
}

void subt(char m, int a, int b, int x[][10], char n, int c, int d, int y[][10], int z[][10])
{
    int i,j,k;
    k=valid(a,b,m)*valid(c,d,n);
    if(k==1)
    {
        if(a==c && b==d)
        {
            for(i=0;i<a;++i)
                for(j=0;j<d;++j)
                    z[i][j]=x[i][j]-y[i][j];
            printf("\nSubtraction of two matrices(A-B) is:\n");
            display2(a, b, z);
        }
        else
            printf("\nRows as well as columns must be same in the both matrices for subtraction operation\n");
    }
}

void multi(char p, int m, int n, int a[][10], char q, int r, int c, int b[][10], int mul[][10])
{
    int i,j,k,l,sum;
    l=valid(m,n,p)*valid(r,c,q);
    if(l==1)
    {
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
            display2(m,c,mul);
        }
        else
            printf("Error.");
    }
}

void trans(int m, int n, int a[][10], int tran[][10], char c)
{
    int i,j,k;
    k=valid(m,n,c);
    if(k==1)
    {
        printf("\nTranspose of matrix %c is:\n",c);
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
               tran[i][j]=a[j][i];
        display2(n,m,tran);
    }
}

void duplicate(int *m, int *n, int a[][10], int b[][10], char c)
{
    int i,j,p;
    p=*n;
    *n=*m;
    *m=p;
    for(i=0;i<*m;i++)
    {
        for(j=0;j<*n;j++)
           a[i][j]=b[i][j];
    }
    printf("\nNew %c matrix is:\n",c);
    display2(*m,*n,a);
}

void edit(int a, int b, int z[][10], char m)
{
    int i,j,k;
    k=valid(a,b,m);
    if(k==1)
    {
        printf("\nSelect the row: ");
        scanf("%d",&i);
        printf("Select the column: ");
        scanf("%d",&j);
        if(i>0 && i<=a && j>0 && j<=b)
        {
            printf("Give the edited value: ");
            scanf("%d",&z[i-1][j-1]);
        }
        else
            printf("Size of the matrix is %dX%d. Enter data according to its size.\n");
    }
}

void de()
{
    printf("Enter valid option.\n");
}

void  reset(int *a, int *b, char c)
{
    *a=0;
    *b=0;
    printf("\nMatrix %c is reset.\n",c);
}


















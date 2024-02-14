/*
    *         *****     1          0         A         1
    **        ****      22         10        BB        2  3
    ***       ***       333        101       CCC       4  5  6
    ****      **        4444       0101      DDDD      7  8  9 10
    *****     *         55555      01010     EEEEE    11 12 13 14 15
*/


#include<stdio.h>

/*
    *
    **
    ***
    ****
*/
/*
int main()
{
    int i,j,n;
    printf("enter no. of row: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}
*/



/*  *****
    ****
    ***
    **
    *
*/
/*
int main()
{
    int i,j,k,n;
    printf("enter no. of row: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1-i;j++)
            printf("*");
        printf("\n");
    }
}
*/



/*  1
    22
    333
    4444
*/
/*
int main()
{
    int i,j,n;
    printf("enter no. of row: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d",i);
        printf("\n");
    }
}
*/



/*  0
    10
    101
    0101
    01010
*/
/*
int main()
{
    int i,j,n,m=1;
    printf("enter no. of row: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(m%2==0)
                printf("1");
            else
                printf("0");
            m++;
        }
        printf("\n");
    }
}
*/



/*  A
    BB
    CCC
    DDDD
    EEEEE
*/
/*
int main()
{
    int i,j,n,k=65;
    printf("enter no. of row: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%c",k);
        k++;
        printf("\n");
    }
}
*/



/*    1
      2  3
      4  5  6
      7  8  9 10
     11 12 13 14 15
*/

int main()
{
    int i,n,j,k;
    printf("Enter the no. of line: ");
    scanf("%d",&n);
    for(i=1,k=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%3d",k++);
        printf("\n");
    }
}

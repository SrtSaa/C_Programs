/*
           1         1
          101       010
         10101     10101
        1010101   0101010
*/

#include<stdio.h>

/*
       1
      101
     10101
    1010101
*/
/*int main()
{
    int n,i,j,sp;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(sp=1;sp<=(n-i);sp++)
            printf(" ");
        for(j=1;j<=(2*i-1);j++)
            printf("%d",j%2);
        printf("\n");
    }
    return 0;
}
*/

/*
       1
      010
     10101
    0101010
*/
/*
int main()
{
    int i,n,j,k,sp;
    printf("Enter the no. of line: ");
    scanf("%d",&n);
    for(i=1,k=1;i<=n;i++)
    {
        for(sp=1;sp<=(n-i);sp++)
            printf(" ");
        for(j=1;j<=(2*i-1);j++)
        {
            printf("%d",k%2);
            k++;
        }
        printf("\n");
    }
}
*/




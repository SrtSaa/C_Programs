#include<stdio.h>
int main()
{
    int a[50],i=0,j;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("\nYour given number is: %d",n);

    for(i=0;n>0;i++,n/=10)
        a[i]=n%10;

    printf("\n\nReverse number is: ");
    for(j=0;j<i;j++)
        printf("%d",a[j]);
}


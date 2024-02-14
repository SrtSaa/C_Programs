#include<stdio.h>
int main()
{
    int n, n1,n2=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    n1=n;
    for(;n>0;n/=10)
    {
        n2=n2*10+n%10;
        //n=n/10;
    }
    if(n2==n1)
        printf("\npalindrome");
    else
        printf("\nnot palindrome");
    return 100;
}

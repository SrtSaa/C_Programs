//loop_ factorial using
#include<stdio.h>
int main()
{
    int n,i, p=1,f=1;
    printf("Enter number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        p=p*i;
    }
    printf(" \nfactorial= %d", p);

    while(n>=1)
    {
        f*=n;
        n--;
    }
    printf("\nfactorial = %d", f);
    return 0;
}

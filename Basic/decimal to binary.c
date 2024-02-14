#include<stdio.h>

/*
//using array
int main()
{
    int n,i=0,a[50],m;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0)
    {
        a[i++]=n%2;
        n/=2;
    }
    for(m=i-1;m>=0;m--)
        printf("%d",a[m]);
    return 100;
}
*/

//not using array
#include<stdio.h>
int main()
{
    int n,m=0,b=1,k;
    printf("Enter the number: ");
    scanf("%d",&n);
    k=n;
    while(n>0)
    {
        b=b*10+n%2;
        n/=2;
    }
    while(b>0)
    {
        m=m*10+b%10;
        b/=10;
    }
    printf("Binary of %d is %d",k,m/10);
}

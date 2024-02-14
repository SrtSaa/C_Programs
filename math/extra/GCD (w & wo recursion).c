//GCD (srt_saa)

#include<stdio.h>

/*int gcd(int a, int b)  //recursion
{
    int r=b%a;
    if(r==0)
        return a;
    gcd(r,a);
}*/

int main()
{
    int n1,n2,r;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)               //without recursion
    {
        r=n1;
        n1=n2;
        n2=r;
    }
    while(r!=0)
    {
        r=n2%n1;
        n2=n1;
        n1=r;
    }
    //n2=gcd(n1,n2);
    printf("\ngcd: %d",n2);
}


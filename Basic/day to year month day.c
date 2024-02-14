#include<stdio.h>
int main()
{
    int n,y,m,d,x;
    printf("Enter no of days: ");
    scanf("%d",&n);
    x=n;
    y=n/365;
    n=n%365;
    m=n/30;
    d=n%30;
    if(y!=0)
        printf("%d days = %d years %d months %d days.",x,y,m,d);
    else
        printf("%d days = %d months %d days.",x,m,d);
}

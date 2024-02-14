#include<stdio.h>
#include<conio.h>


int main()
{
    int n;
    int recfact(int);
    //clrsr();
    printf("Enter a no.: ");
    scanf("%d",&n);
    printf("\n\nFactorial of %d! = %d",n,recfact(n));
    //getch();
}

int recfact(int n)
{
    if(n==0)
        return (1);
    else
        return (n*recfact(n-1));
}

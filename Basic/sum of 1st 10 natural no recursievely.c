//sum of 1st 10 natural no recursievely

#include<stdio.h>
#include<conio.h>

int main()
{
    int s;
    int recsum(int);
    //clrsr();
    s=recsum(1);
    printf("\n\nSum of first 10 natural no.= %d",s);
    //getch();
}

int recsum(int n)
{
    int s=0;
    if(n==11)
        return s;
    s=n+recsum(n+1);
    //return s;
}

//Power recurcsievly

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int b,p;
    int recpower(int, int);
    //clrssr();
    printf("Enter the base and power: ");
    scanf("%d%d",&b,&p);
    printf("\n\n\n%d^%d=%d",b,p,recpower(b,p));
    //getch();
}

int recpower(int b, int p)
{
    if(p==0)
        return 1;
    else
        return b*recpower(b,--p);
}

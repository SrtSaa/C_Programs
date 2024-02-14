//Converting a decimal no to its equivalent bainary no recursively

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int decno;
    void recbin(int);
    //clrsr();
    printf("Enter a decmal no. please: ");
    scanf("%d",&decno);
    printf("\n\n");
    recbin(decno);
    //getch();
}

void recbin(int n)
{
    if(n>0)
    {
        recbin(n/2);
        printf("%d",n%2);
    }
}

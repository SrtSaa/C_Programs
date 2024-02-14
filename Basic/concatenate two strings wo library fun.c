#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


int main()
{
    char a[20],b[20],c[41];
    int i=0,j=0,k,f=0;

    printf("\nEnter string 1: ");
    gets(a);
    printf("\nEnter string 2: ");
    gets(b);
    i=strlen(a)-1;
    j=strlen(b);

    for(k=0;k<=i;k++)
        c[k]=a[k];
    c[k]=' ';
    for(i=1;i<=j;i++)
        c[k+i]=b[i-1];
    puts(c);
}


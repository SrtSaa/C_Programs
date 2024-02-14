#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


int main()
{
    char a[50],b[50];
    int i=0,j=0,f=0;

    printf("\nEnter first string :: ");
    gets(a);
    j=strlen(a)-1;
    for(i=j;i>=0;i--)
        b[j-i]=a[i];
    puts(b);
}

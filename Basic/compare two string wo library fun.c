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
    printf("\nEnter Second string :: ");
    gets(b);
    puts(a);
    puts(b);
    while(a[i]!='\0')
       i++;
    while(b[j]!='\0')
       j++;

    if(i!=j)
        f=0;
    else
    {
        f=1;
        for(i=0,j=0;a[i]!='\0',b[j]!='\0';i++,j++)
            if(a[i]!=b[j])
            {
                f=0;
                break;
            }
    }

    if(f==0)
        printf("\nStrings are not equal\n");
    else
        printf("\nStrings are equal.\n");
}

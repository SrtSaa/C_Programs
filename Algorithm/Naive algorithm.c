//Naive algorithm  (srt_saa)

#include<stdio.h>
#include<string.h>

int main()
{
    char a[30], b[30];
    int i,f=0,k=0;
    printf("Enter main string: ");
    gets(a);
    printf("Enter searching string: ");
    gets(b);

    if(strlen(a)>strlen(b))
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]!=b[k])
                k=0;
            if(a[i]==b[k])
                k++;
            if(k==strlen(b))
            {
                f++;
                k=0;
            }
            if(i>(strlen(a)-strlen(b))&&k==0)
                break;
        }

    if(f!=0)
        printf("\nSearching string found.\t It presents %d time(s).\n",f);
    else
        printf("\nSearching string is not found.\n");
}

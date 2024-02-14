//Binary Search (without recursion)   (srt_saa)

#include<stdio.h>

int main()
{
    int a[10],i,l=0,r,n,f=0,x;

    printf("Enter number of elements: ");
    scanf("%d",&x);
    printf("Enter your element 1: ");
    scanf("%d",&a[0]);
    for(i=1;i<x;i++)
    {
        printf("Enter your element %d: ",i+1);
        scanf("%d",&n);
        if(n>=a[i-1])
            a[i]=n;
        else
        {
            printf("Enter sorted element.\n");
            i--;
        }
    }
    r=x;
    /*printf("Your data are: ");
    for(i=0;i<x;i++)
        printf("%d\t",a[i]);*/
    while(1){
    printf("\n\nEnter your search element: ");
    scanf("%d",&n);

    while(l<=r)
    {
        if(n==a[(l+r)/2])
        {
            f=1;
            printf("\nData found.\tPosition of data: %d\n\n",(l+r)/2+1);
            break;
        }
        else if(n>a[(l+r)/2])
            l=((l+r)/2)+1;
        else if(n<a[(l+r)/2])
            r=((l+r)/2)-1;
    }

    if(f!=1)
        printf("\nYour searching element is not present.\n\n");
}}

//binary search


#include<stdio.h>

int main()
{
    int a[10],c,i,j,n,val,beg=0,end,mid,f=0;
    printf("Enter the no. of the values: ");
    scanf("%d",&n);

    printf("\nEnter the values:\n");
    for(i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d", &a[i]);
    }
    printf("\nEnter the value to be found: ");
    scanf("%d",&val);

    for(i=0;i<n;i++)
        for(j=0;j<n-i;j++)
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }

    end=n-1;

    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(val==a[mid])
        {
            f=1;
            break;
        }
        if(val<a[mid])
            end=mid-1;
        if(val>a[mid])
            beg=mid+1;
    }
    if(f==1)
        puts("FOUND");
    else
        puts("NOT FOUND");
    return 0;
}

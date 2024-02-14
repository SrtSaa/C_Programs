#include<stdio.h>

int main()
{
    int arr[10],max,min,n,i;
    printf("Enter the no of values: ");
    scanf("%d",&n);
    printf("Enter the value :");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    max=min=arr[0];

    for(i=1;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
        if(min>arr[i])
        min=arr[i];
    }
    printf("MAX=%d MIN=%d",max,min);
}

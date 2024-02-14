//index no of a searching element in an array

#include<stdio.h>
int main()
{
    int arr[10], n,i,val,index;
    int linear_search(int [],int, int);
    printf("Enter the no. of values: ");
    scanf("%d",&n);
    printf("Enter the values for the array: ");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    printf("Enter the value to be found: ");
    scanf("%d",&val);
    index=linear_search(arr,n,val);
    if(index>=0)
        printf("FOUND at %dth place",index);
    else
        printf("NOT FOUND");
    return 0;
}
int linear_search(int arr[], int n, int val)
{
    int i, flag=0;
    for(i=0;i<n;i++)
        if(arr[i]==val)
        {
            flag=1;
            break;
        }
    if(flag==1)
        return i;
    else
        return -1;
}


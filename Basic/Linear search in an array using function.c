//Linear search in an array using function

#include<stdio.h>
int main()
{
    int arr[10],n,i,val;
    int linear_search(int [],int, int);
    printf("Enter the no. of values: ");
    scanf("%d",&n);
    printf("Enter the values:\n");
    for(i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the value to be found: ");
    scanf("%d",&val);
    if(linear_search(arr,n,val)==1)
        printf("FOUND");
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
        return 1;
    else
        return 0;
}

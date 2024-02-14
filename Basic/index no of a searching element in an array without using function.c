//index no of a searching element in an array without using function

#include<stdio.h>
int main()
{
    int arr[10],n,i,val,flag=0;
    printf("Enter the no. of values: ");
    scanf("%d",&n);
    printf("Enter the values for the array: ");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    printf("Enter the value to be found: ");
    scanf("%d",&val);
    for(i=0;i<n;i++)
        if(arr[i]==val)
        {
            flag=1;
            break;
        }
    if(flag)
        printf("FOUND at %dth place",i);
    else
        printf("NOT FOUND");
    return 0;
}

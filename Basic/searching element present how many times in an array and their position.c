// searching element present how many times in an array and their position. [Linear search] (using function)

#include<stdio.h>
int main()
{
    int arr[10],n,i,val,a[10];
    int linear_search(int [],int,int,int* );
    printf("Enter the no. of values: ");
    scanf("%d",&n);
    printf("\nEnter the values:\n");
    for(i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the value to be found: ");
    scanf("%d",&val);
    i=linear_search(arr,n,val,&a);
    if(i!=0)
    {
        printf("\nFOUND\n");
        printf("searching element present %d times.",i);
        printf("\nposition(s) of %d in the array is(are):",val);
        for(n=0;n<i;n++)
            printf("%d  ",a[n]);
        printf("\n");
    }
    else
        printf("\nNOT FOUND\n");
    return 10;
}

int linear_search(int arr[], int n, int val, int *a)
{
    int i,flag=0;
    for(i=0;i<n;i++)
        if(arr[i]==val)
            a[flag++]=i+1;
    return flag;
}


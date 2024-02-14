//Binary Search (using recursion)   (srt_saa)

#include<stdio.h>
#include<stdlib.h>

int* a;
int n,t,i,m,f;

void bs(int x,int y)
{
    m=(x+y)/2;
    if(a[m]==t)
        f=m;
    else if(m==x)
        f=-1;
    else if(a[m]<t)
        bs(m+1,y);
    else
        bs(x,m-1);
}

int main()
{
    printf("Enter the no of elements: ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter element 1: ");
    scanf("%d",&a[0]);
    for(i=1;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&m);
        if(m>=a[i-1])
            a[i]=m;
        else
        {
            printf("Enter sorted element.\n");
            i--;
        }
    }
    printf("Enter the searching elements: ");
    scanf("%d",&t);
    bs(0,n);
    if(f!=-1)
        printf("\nElement present.\tPosition of the data %d",f+1);
    else
        printf("\nElement not present.");
    free(a);
}

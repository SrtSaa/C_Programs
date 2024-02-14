//Mean_Median_Mode (srt_saa)

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int* a;
    int** b;
    int i,j,n,x,sum=0,max;
    float mean,median;
    printf("Enter number of entries: ");
    scanf("%d",&n);
    while(0)
    {
        if(n<4)
        {
            printf("Enter at least 5.\n");
            printf("Enter number of entries: ");
            scanf("%d",&n);
            continue;
        }
        break;
    }
    a=(int*)malloc(n*sizeof(int));
    b=(int**)malloc(2*sizeof(int*));
    for(i=0;i<n;i++)
        b[i]=(int*)malloc(n*sizeof(int));

    printf("Enter element 1: ");
    scanf("%d",&a[0]);
    for(i=1;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&x);
        if(x<a[i-1])
        {
            printf("Enter sorted element.\n");
            i--;
        }
        else
            a[i]=x;
    }
    printf("\nYour data:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);

    //Mean
    for(i=0;i<n;i++)
        sum+=a[i];
    mean=(float)sum/n;

    //Median
    printf("\n\nMean: %.2f",mean);
    if(n%2!=0)
        median=a[n/2];
    else
        median=(float)(a[n/2]+a[(n-1)/2])/2;
    printf("\nMedian: %.2f",median);

    //Mode
    b[0][0]=a[0];
    max=b[1][0]=1;
    for(i=1,x=0;i<n;i++)
    {
        if(a[i]==b[0][x])
        {
            b[1][x]++;
            if(max<b[1][x])
                max=b[1][x];
        }
        else
        {
            b[0][++x]=a[i];
            b[1][x]=1;
        }
    }
    if(max==1)
        printf("\nMode: No mode present.");
    else
    {
        printf("\nMode:  ");
        for(i=0;i<=x;i++)
            if(b[1][i]==max)
                printf("%d\t",b[0][i]);
    }
    printf("\n\n");
}

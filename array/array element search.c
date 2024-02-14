#include<stdio.h>

int main()
{
    int a[50], b[50], n, i, j, m=1, c;
    printf("Enter the numbers of the element in the array: ");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)             //entering elements of the array
    {
        printf("enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nyour array is:\n");   //showing elements of a array
    for(i=0;i<=n-1;i++)
        printf("%d\t",a[i]);
    printf("\n");

    for(i=0;i<n;i++)                //copying of the array a to b
        b[i]=a[i];

    for(j=0;j<n-1;j++)              //sort b array
        for(i=0;i<n-j;i++)
            if(b[i]>b[i+1])
            {
                c = b[i];
                b[i] = b[i+1];
                b[i+1] = c;
            }
    printf("\n");

    for(i=0;i<n;i++)                //check repeating element and print
    {
        if(b[i]<b[i+1])
        {
            printf("%d is present for %d time(s)\n",b[i],m);
            m=0;
        }
        m++;
    }
    return 100;
}

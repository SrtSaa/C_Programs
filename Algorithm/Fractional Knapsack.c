//Fractional Knapsack (srt_saa)

#include<stdio.h>
#include<stdlib.h>

int n,i,j;
float w,p=0;
float** a;

void swap(int, int);

int main()
{
    //Taking input
    printf("Enter the no of data and total weight:\n");
    scanf("%d%f",&n,&w);
    a=(float**)malloc(3*sizeof(float*));
    for(i=0;i<3;i++)
        a[i]=(float*)malloc(n*sizeof(float));
    printf("Enter profit, weight:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f%f",&a[0][i],&a[1][i]);
        a[2][i]=a[0][i]/a[1][i];
    }

    //Sorting based on profit
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(a[2][i]<a[2][j])
                swap(i,j);

    /*for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%f\t",a[i][j]);
        printf("\n");
    }*/

    //Fractional Knapsack
    i=0;
    while(a[1][i]<w)
    {
        p+=a[0][i];
        w-=a[1][i];
        i++;
    }
    p+=w*a[2][i];
    printf("\nMaximum profit: %.3f\n",p);
}

void swap(int x, int y)
{
    for(int i=0;i<3;i++)
    {
        int k=a[i][x];
        a[i][x]=a[i][y];
        a[i][y]=k;
    }
}

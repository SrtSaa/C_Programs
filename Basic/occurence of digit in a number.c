#include<stdio.h>
int main()
{
    int a[10],n,i,j,f=0,r,x=0;
    for(i=0;i<10;i++)
        a[i]=0;
    printf("Enter no.: ");
    scanf("%d",&n);

    if(n<0)
        n=(-1)*n;

    for(i=0;n>0;i++)
    {
        r=n%10;
        a[r]++;
        n=n/10;
        f=0;
    }

    printf("\n");
    for(i=0;i<10;i++)
        if(a[i]!=0)
            printf("%d: %d\t",i,a[i]);
}


//another process
/*int main()
{
    int a[2][10],n,i,j,f=0,r,x=0;
    for(i=1;i<10;i++)
        a[1][i]=0;
    printf("Enter no.: ");
    scanf("%d",&n);
    if(n<0)
        n=(-1)*n;

    for(i=0;n>0;i++)
    {
        r=n%10;
        for(j=0;j<x;j++)
        {
            if(a[0][j]==r)
            {
                f++;
                a[1][j]++;
                break;
            }
        }
        if(f==0)
        {
            a[0][x]=r;
            a[1][x++]=1;
        }
        n=n/10;
        f=0;
    }

    printf("\n\n");
    for(i=0;i<x;i++)
        printf("%d: %d\t",a[0][i],a[1][i]);
}*/

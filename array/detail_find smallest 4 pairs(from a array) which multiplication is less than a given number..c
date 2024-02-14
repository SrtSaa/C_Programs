//find smallest 4 pairs(from a array) which multiplication is less than a given number.

//Remove all command from line 9 & follow following steps
//Level 1: command 13,16 & 57-65 & 72-92 & 153-165   <- except these lines use all
//Level 2: command 13 & 57-65 & 74,90,91 & 94-151    <- except these lines use all
//Level 3: command 94-151     <- except these lines use all
//Level 4: [Actual code] command 50s-57 & 74 & 94-151      <- except these lines use all

#include<stdio.h>
#include<stdlib.h>

int b[11];
int lmax=1000000;

void check(int,int,int);
void change(int,int,int,int);

int main()
{
    b[2]=b[5]=b[8]=b[11]=1000000;
    int* ptr;
    int n,i,j,x;

    printf("Enter the no of entries: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));

    printf("Enter element 1: ");
    scanf("%d",&ptr[0]);
    for(i=1;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&x);
        if(x<ptr[i-1])
        {
            printf("Enter sorted element.\n");
            i--;
        }
        else
            ptr[i]=x;
    }

    printf("Enter the target number: ");
    scanf("%d",&x);
    printf("\nYour data are: \n");
    for(i=0;i<n;i++)
        printf("%d\t",ptr[i]);
    printf("\n\n");

/*    printf("Actual multiplication:\n");
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        {
            printf("%d * %d = %d\n",ptr[i],ptr[j],ptr[i]*ptr[j]);
            check(ptr[i],ptr[j],x);
        }
    printf("\n\nReduced multiplication:\n");    */
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        {
            if(ptr[i]*ptr[j]>lmax)
                break;
            else
                check(ptr[i],ptr[j],x);
        }

    printf("\n4 pairs:\n");
    for(i=0;i<12;i=i+3)
        printf("(%d,%d)\t",b[i],b[i+1]);
}

void check(int m, int n,int x)
{
    //printf("%d * %d = %d\n",m,n,m*n);
    int diff,i;
    diff=m*n-x;
    if(diff<0)
        diff=(-1)*(diff);
    if(diff<b[11])
    {
        if(diff<b[2])
            change(2,m,n,diff);
        else if(diff>=b[2]&&diff<b[5])
            change(5,m,n,diff);
        else if(diff>=b[5]&&diff<b[8])
            change(8,m,n,diff);
        else if(diff>=b[8]&&diff<b[11])
            change(11,m,n,diff);
    }
    if((m*n)>(x+b[11]))
       lmax=m*n;
}

/*void check(int m, int n,int x)
{
    int diff,i;
    diff=m*n-x;
    if(diff<0)
        diff=(-1)*(diff);
    if(diff<b[11])
    {
        if(diff<b[2])
        {
            for(i=11;i>0;i=i-3)
            {
                b[i]=b[i-3];
                b[i-1]=b[i-4];
                b[i-2]=b[i-5];
            }
            b[0]=m;
            b[1]=n;
            b[2]=diff;
        }
        else if(diff>=b[2]&&diff<b[5])
        {
            for(i=11;i>3;i=i-3)
            {
                b[i]=b[i-3];
                b[i-1]=b[i-4];
                b[i-2]=b[i-5];
            }
            b[3]=m;
            b[4]=n;
            b[5]=diff;
        }
        else if(diff>=b[5]&&diff<b[8])
        {
            for(i=11;i>6;i=i-3)
            {
                b[i+1]=b[i-2];
                b[i]=b[i-3];
                b[i-1]=b[i-4];
            }
            b[6]=m;
            b[7]=n;
            b[8]=diff;
        }
        else if(diff>=b[8]&&diff<b[11])
        {
            for(i=11;i>9;i=i-3)
            {
                b[i+1]=b[i-2];
                b[i]=b[i-3];
                b[i-1]=b[i-4];
            }
            b[9]=m;
            b[10]=n;
            b[11]=diff;
        }
    }
}*/

void change(int k,int f, int g, int h)
{
    int i;
    for(i=11;i>k-2;i=i-3)
    {
        b[i+1]=b[i-2];
        b[i]=b[i-3];
        b[i-1]=b[i-4];
    }
    b[k-2]=f;
    b[k-1]=g;
    b[k]=h;
}

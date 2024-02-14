//Newton's Forward and Backward Interpolation (srt_saa)

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define M 99999

int n;
float k, u, h, f=1, ut=1, m;
float* a;
float** d;

void ip();              //taking input
float del(int, int);    //forward difference function
void check();          //check to call forward or backward
void N_Fwd(int);       //Newton forward interpolation
void N_Bwd(int);       //Newton backward interpolation

int main()
{
    int i,j;
    printf("Enter the no of data entries: ");
    scanf("%d",&n);

    ip();
    check();
}

void ip()
{
    int i,j;
    float x;
    a=(float *)malloc(n*sizeof(float));
    d=(float **)malloc(n*sizeof(float*));
    for(i=0;i<n;i++)
        d[i]=(float *)malloc(n*sizeof(float));
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            d[i][j]=M;

    printf("\nEnter the values of x and f(x):\n");
    for(i=0;i<2;i++)
        scanf("%f%f",&a[i],&d[i][0]);
    h=a[1]-a[0];
    for(i=2;i<n;i++)
    {

        scanf("%f%f",&a[i],&d[i][0]);
        if(a[i]-a[i-1]!=h)
        {
            printf("Value of x must be equispaced. Enter previous value again.\n");
            i--;
        }
    }

    printf("\n\nData are:\nx:\t");
    for(i=0;i<n;i++)
        printf("%f\t",a[i]);
    printf("\nf(x):\t");
    for(i=0;i<n;i++)
        printf("%f\t",d[i][0]);

    printf("\n\n\nEnter the value of required x: ");
    scanf("%f",&k);
    while(k<a[0])
    {
        printf("\nYour input value must be greater than %f",a[0]);
        printf("\n\n\nEnter the value of required x: ");
        scanf("%f",&k);
    }
}

void check()
{
    int i=0;
    float mid=(a[0]+a[n-1])/2;
    if(k<mid)
    {
        while(a[i]<k)
            i++;
        i--;
        N_Fwd(i);
    }
    else
    {
        if(k>a[n-1])
        {
            N_Bwd(n-1);
        }
        else
        {
            i=n-1;
            while(k<a[i])
                i--;
            i++;
            N_Bwd(i);
        }
    }
}

float del(int x, int m)
{
    if(x==0)
        return d[m][0];
    else
    {
        if(d[m][x]!=M)
            return d[m][x];
        else
        {
            d[m][x]=del(x-1,m+1)-del(x-1,m);
            return d[m][x];
        }
    }
}

void N_Fwd(int x)
{
    int i;
    m=d[x][0];
    u=(k-a[x])/h;//
    for(i=1;i<n-x;i++)
    {
        ut*=u+1-i;
        f*=i;
        m+=(ut*del(i,x))/f;
    }
    printf("\n\nf(%f)= %f",k,m);
}

void N_Bwd(int x)
{
    int i;
    m=d[x][0];
    u=(k-a[x])/h;
    for(i=1;i<=x;i++)
    {
        ut*=u-1+i;
        f*=i;
        m+=(ut*del(i,x-i))/f;
    }
    printf("\n\nf(%f)= %f\n",k,m);
}

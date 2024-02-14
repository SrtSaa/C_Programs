//Lagrange's Interpolation (srt_saa)

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int n;
float x;
float** a;

void ip();      //taking input
void lag();     //Lagrange's Interpolation

int main()
{
    ip();
    lag();
}

void ip()
{
    int i,j;
    printf("Enter the no of data entries: ");
    scanf("%d",&n);

    a=(float **)malloc(2*sizeof(float*));
    for(i=0;i<2;i++)
        a[i]=(float *)malloc(n*sizeof(float));

    printf("\nEnter the values of x and f(x):\n");
    for(i=0;i<n;i++)
        scanf("%f%f",&a[0][i],&a[1][i]);

    printf("\n\nData:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<n;j++)
            printf("%f\t",a[i][j]);
        printf("\n");
    }

    printf("\n\nEnter the value of required x: ");
    scanf("%f",&x);
}

void lag()
{
    int i,j;
    float w=1,m=1,l=0;
    for(i=0;i<n;i++)
        w*=(x-a[0][i]);
    for(i=0;i<n;i++)
    {
        m=1;
        for(j=0;j<n;j++)
        {
            if(i==j)
                m*=x-a[0][i];
            else
                m*=a[0][i]-a[0][j];
        }
        l+=a[1][i]/m;
    }
    l*=w;

    printf("\n\nf(%f)= %f\n",x,l);
}

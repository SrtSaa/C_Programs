//Trapezoidal method (srt_saa)

#include<stdio.h>
#include<math.h>

float f(float x)
{
    return x/(1+x);
}

int main()
{
    int n,i;
    float a,b,sum=0,h,m;
    printf("Enter lower limit, upper limit, no of sub intervals:\n");
    scanf("%f%f%d",&a,&b,&n);
    h=(b-a)/n;
    sum=f(a)+f(b);
    for(i=1;i<n;i++)
    {
        m=a+i*h;
        sum+=2*f(m);
    }
    sum=sum*h/2;
    printf("\nIntegration value: %.3f\n",sum);
}

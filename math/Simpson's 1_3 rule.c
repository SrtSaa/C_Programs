//Simpson's 1/3 rule   (srt_saa)

#include<stdio.h>
#include<math.h>

float f(float x)
{
    return x/(1+x);
}

int main()
{
    float a=0,b=1,h,sum,m;
    int i,n=6;
    printf("Enter upper limt, lower limit and no of sub intervals:\n");
    scanf("%f%f%d",&a,&b,&n);
    if(n%2==0)
    {
        h=(b-a)/n;
        sum=f(a)-f(b);
        a+=h;
        for(i=1;i<n;i=i+2)
        {
            sum+=4*f(a)+2*f(a+h);
            a=a+2*h;
        }
        sum=sum*h/3;
        printf("\nIntegration value: %.3f\n",sum);
    }
    else
        printf("Number of sub interval must be even.");
}

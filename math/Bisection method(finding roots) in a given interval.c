//Finding a root using Bisection method in a given interval (srt_saa)

#include<stdio.h>
#include<math.h>

float f(float x)
{
    return pow(10,x)+sin(x)+2*x;
}

int main()
{
    float a,b,mid=99,t,m;
    int i=0;
    printf("Enter two initial guesses and tolerable error:\n");
    scanf("%f%f%f",&a,&b,&t);
    if(f(a)*f(b)<0)
    {
        if(f(b)<0)
        {
            m=a;
            a=b;
            b=m;
        }
        printf("\tn\ta\tb\tmid\tf(mid)\n");
        while(1)
        {
            mid=(a+b)/2;
            printf("\t%d\t%.4f\t%.4f\t%.4f\t%.4f\n",i,a,b,mid,f(mid));
            if(fabs(a-b)<=t && fabs(b-mid)<=t)
                break;
            if(f(mid)==0)
                break;
            else if(f(mid)>0)
                b=mid;
            else
                a=mid;
            i++;
        }
        printf("Root of the equation is: %.3f",mid);
    }
    else
        printf("Wrong initial guess.");
}

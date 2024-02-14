//Finding a root using Regular Flasi method in a given interval (srt_saa)

#include<stdio.h>
#include<math.h>

float f(float x)
{
    return x*x*x+2*x-2;
}

int main()
{
    float a,b,m,z=99,t;
    int i;
    printf("Enter two initial guesses and tolerable error:\n");
    scanf("%f%f%f",&a,&b,&t);
    if(f(a)*f(b)<0)
    {
        if(f(b)<0)
        {
            m=b;
            b=a;
            a=m;
        }
        printf("\tn\ta\tb\tf(a)\tf(b)\tz\tf(z)\n");
        while(1)
        {
            z=(a*f(b)-b*f(a))/(f(b)-f(a));
            printf("\t%d\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\n",i,a,b,f(a),f(b),z,f(z));
            if(fabs(a-z)<=t||fabs(b-z)<=t)
                break;
            if(f(z)==0)
                break;
            else if(f(z)>0)
                b=z;
            else
                a=z;
            i++;
        }
        printf("Root of the equation is: %.3f",z);
    }
    else
        printf("Wrong initial guesses.");
}

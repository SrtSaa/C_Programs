//Finding a root using Newton Raphson method in a given interval (srt_saa)

#include<stdio.h>
#include<math.h>

float f(float x)
{
    return 3*x-cos(x)-1;
}
float df(float x)
{
    return 3+sin(x);
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
        printf("\tn\tx\tf(x)\tf'(x)\tz\n");
        while(1)
        {
            z=a-f(a)/df(a);
            printf("\t%d\t%.4f\t%.4f\t%.4f\t%.4f\n",i,a,f(a),df(a),z);
            if(fabs(a-z)<=t)
                break;
            if(f(z)==0)
                break;
            a=z;
            i++;
        }
        printf("Root of the equation is: %.3f",z);
    }
    else
        printf("Wrong initial guesses.");
}

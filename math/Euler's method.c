//Euler's method  (srt_saa)

#include<stdio.h>
#include<math.h>

float f(float x, float y)
{
    return (x+y)/2;
}

int main()
{
    float a,b,h,xn;
    int i,n;
    printf("Enter x0, y0, h, xn:\n");
    scanf("%f%f%f%f",&a,&b,&h,&xn);
    n=(xn-a)/h;
    for(i=0;i<n;i++)
    {
        b=b+f(a,b)*h;
        a=a+h;
        printf("\ny(%.2f) = %.3f",a,b);
    }
}

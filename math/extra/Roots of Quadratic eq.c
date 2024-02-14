//Roots of Quadratic eq. (srt_saa)

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    printf("Enter coefficient of a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d==0)
        printf("\nRoots are: %.2f, %.2f",(-b)/(2*a),(-b)/(2*a));
    else if(d>0)
        printf("\nRoots are: %.2f, %.2f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
    else if(d<0)
        printf("\nRoots are: %.2f + %.2fi,  %.2f - %.2fi",(-b)/(2*a),sqrt(-d)/(2*a),(-b)/(2*a),sqrt(-d)/(2*a));
}

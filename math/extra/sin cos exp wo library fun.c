#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int fact(int x)
{
    int i,mul=1;
    if(x==0)
        return 1;
    for(i=1;i<=x;i++)
        mul=mul*i;
    return mul;
}

int main()
{
    float x,r=0,z,b;
    int i,s=-1;
    printf("Enter value of x: ");
    scanf("%f",&x);
    x=x*3.14159/180;

    //z=cos(x);       //for cos
    //z=sin(x);       //for sin
    z=exp(x);       //for exp

    for(i=0;i<13;i++)               //i= 0-9(for cos), 1-8(for sin), 0-13(for exp)
        //r=r+(pow(s,i)*pow(x,2*i)/fact(2*i));          //for cosx
        //r=r+(pow(s,i-1)*pow(x,2*i-1)/fact(2*i-1));    //for sinx
        r=r+(pow(x,i)/fact(i));                       //for exp

    printf("\nApp result= %f",r);
    printf("\nReal result= %f",z);
}




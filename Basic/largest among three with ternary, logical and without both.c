#include<stdio.h>

//write a program to find the largest number

//using logical operator


int main()
{
    int a,b,c,max;
    printf("enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        max=a;
    else if(b>c&&b>a)
        max=b;
    else
        max=c;
    printf("max = %d",max);
    return 100
}

//using ternary operator
/*    int main()
{
    int a,b,c,max;
    printf("enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    max=a>b?a>c?a:c:b>c?b:c;
    printf("max = %d",max);
    return 100;
}

//logical or ternary operator

/*    int main()
{
    int a,b,c,max;
    printf("enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        if(a>c)
            max=a;
        else
            max=c;
    else if(b>c)
            max=b;
        else
            max=c;
    printf("max = %d",max);
    return 100;
}
*/

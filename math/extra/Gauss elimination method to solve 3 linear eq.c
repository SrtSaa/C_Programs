//Gauss elimination method to solve 3 linear eq. (srt_saa)

#include<stdio.h>

int main()
{
    float a[3][4];
    int i,j;
    float k,l,m;
    printf("Equation is in form of 'a(x^2)+bx+c=d'.\n\n");
    for(i=0;i<3;i++)
    {
        printf("For equation %d Enter value of a,b,c,d: ",i+1);
        for(j=0;j<4;j++)
            scanf("%f",&a[i][j]);
    }

    /*printf("Matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            printf("%.2f\t",a[i][j]);
        printf("\n");
    }*/

    for(i=0;i<2;i++)
    {
        k=a[i][i];
        l=a[i+1][i];
        m=a[i+2][i];
        for(j=0;j<4;j++)
        {
            a[i+1][j]=a[i+1][j]-l*(a[i][j]/k);
            a[i+2][j]=a[i+2][j]-m*(a[i][j]/k);
        }
    }

    /*printf("Reduced matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            printf("%.2f\t",a[i][j]);
        printf("\n");
    }*/

    if(a[2][2]==0&&a[2][3]!=0)
        printf("\n\nResult: This system has no solution.");
    else if(a[2][2]==0&&a[2][3]==0)
        printf("\n\nResult: This system has infinite solution.");
    else
    {
        m=(a[2][3])/(a[2][2]);
        l=(a[1][3]-a[1][2]*m)/a[1][1];
        k=(a[0][3]-a[0][2]*m-a[0][1]*l)/a[0][0];
        printf("\n\nResult: x= %.2f    y= %.2f    z= %.2f",k,l,m);
    }
}

//Having solution: {2,1,3,1,3,-2,4,-1,2,-4,2,-2} = {3,1,-2}
//No solution: {3,6,6,5,3,-6,-3,2,3,-2,0,1}
//Infinite solution: {1,2,3,4,5,6,7,8,9,10,11,12}

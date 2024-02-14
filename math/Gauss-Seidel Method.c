//Gauss-Seidel Method (srt_saa)

#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,n;
    float e,x;
    float a[3][4];
    float b[3],m[3];
    printf("Enter data:\n");
    for(i=0;i<3;i++)
    {
        x=0;
        for(j=0;j<3;j++)
        {
            scanf("%f",&a[i][j]);
            x+=fabs(a[i][j]);
        }
        scanf("%f",&a[i][3]);
        if(fabs(a[i][i])<x-fabs(a[i][i]))
        {
            printf("Matrix must be digonally dominant. Enter data again.\n");
            i--;
        }
    }
    printf("\nCorrect upto n sig fig, Enter n: ");
    scanf("%d",&n);
    e=1/pow(10,n);
    for(i=0;i<3;i++)
    {
        m[i]=99999;
        b[i]=0;
    }

    i=0;
    printf("\n\ntable:\n\tk\t\tx1(k)\t\tx2(k)\t\tx3(k)\n");
    printf("\t%d\t%f\t%f\t%f\n",i,b[0],b[1],b[2]);
    while(fabs(b[0]-m[0])>e||fabs(b[1]-m[1])>e||fabs(b[2]-m[2])>e)
    {
        i++;
        m[0]=b[0];
        m[1]=b[1];
        m[2]=b[2];
        b[0]=(a[0][3]-a[0][1]*b[1]-a[0][2]*b[2])/a[0][0];
        b[1]=(a[1][3]-a[1][0]*b[0]-a[1][2]*b[2])/a[1][1];
        b[2]=(a[2][3]-a[2][0]*b[0]-a[2][1]*b[1])/a[2][2];
        printf("\t%d\t%f\t%f\t%f\n",i,b[0],b[1],b[2]);
    }
    printf("\n\nx1= %.4f\tx2= %.4f\tx3= %.4f",b[0],b[1],b[2]);
}

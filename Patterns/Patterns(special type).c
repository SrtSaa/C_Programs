//#include<stdio.h>

/*
    *******
    *     *
    *     *
    *     *
    *     *
    *     *
    *******
*/
/*
int main()
{
    int i,j,n;
    printf("Enter the height: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1||i==n)
            for(j=1;j<=n;j++)
                printf("*");
        else
        {
            for(j=1;j<=n;j++)
            {
                if(j==1||j==n)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}



//another process

int main()
{
    int i,h,j;
    printf("Enter the height: ");
    scanf("%d",&h);
    for(i=1;i<=h;i++)
        printf("*");
    printf("\n");
    for(j=1;j<=h-2;j++)
    {
        printf("*");
        for(i=1;i<=h-2;i++)
            printf(" ");
        printf("*\n");
    }
    for(i=1;i<=h;i++)
        printf("*");
}
*/




/*
    4 4 4 4 4 4 4
    4 3 3 3 3 3 4
    4 3 2 2 2 3 4
    4 3 2 1 2 3 4
    4 3 2 2 2 3 4
    4 3 3 3 3 3 4
    4 4 4 4 4 4 4
*/

/*
#include<stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
}

//another process
#include <stdio.h>

int main()
{

    int n,k,x,i,j;
    scanf("%d", &n);
    x=n;
  	for(i=1;i<=n;i++){
        k=n;
        for(j=1;j<=n;j++){
            printf("%d ",k);
            if(k>x)
                k--;
        }
        for(j=1;j<n;j++){
            if(k==j)
                k++;
            printf("%d ",k);
        }
        printf("\n");
        x--;
    }
    x=2;
    for(i=1;i<n;i++){
        k=n;
        for(j=1;j<=n;j++){
            printf("%d ",k);
            if(k>x)
                k--;
        }
        for(j=1;j<n;j++){
            if(k==j)
                k++;
            printf("%d ",k);
        }
        printf("\n");
        x++;
    }
}
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1001];
    int* a;
    a=(int*)malloc(10*sizeof(int));
    int i;
    for(i=0;i<10;i++)
        a[i]=0;
    scanf("%s",&s);
    printf("%s",s);
    //a[2]=2;
    //printf("%d\t",a[2]);
    //for(i=0;i<10;i++)
      //  printf("%d\t",a[i]);
    i=0;
    while(i<strlen(s)){
            //printf("in while");
        if(s[i]>=48&&s[i]<=57)
            a[s[i]-48]+=1;
        i++;
    }
    printf("\n");
    for(i=0;i<10;i++)
        printf("%d\t",a[i]);
    return 0;
}


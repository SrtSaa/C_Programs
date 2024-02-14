#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if(year%100 == 0 && year%400==0)
    {
        printf("%d is a leap year.", year);
    }
    else if(year%100!=0 && year%4==0)
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is Not a leap year. ", year);
    }

    return 0;
}


//using ternary

/*int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d", &year);
    printf(year%100==0?year%400==0?"Leap year":"Not leap year. ":year%4==0?"Leap year":"Not Leap year. ");

    return 0;
}*/

#include<stdio.h>
#include<stdlib.h>
void insert(int *y, int d[])
{
    int i,c,b;
    printf("\nenter the element to be inserted: ");
    scanf("%d",&c);
    printf("enter the position: ");
    scanf("%d",&b);
    if (b>=*y+2)
        printf("-not possible");
    else
    {
        for(i=*y;i>=b;i--)
            d[i]=d[i-1];
        d[b-1]=c;
        *y=*y+1;
    }
}

void delete(int *p, int q[])
{
    int i,pos;
    printf("\nenter the position to be deleted: ");
    scanf("%d",&pos);
    if(pos>=*p+1)
        printf("-not possible");
    else
    {
        for(i=pos-1;i<=*p;i++)
            q[i]=q[i+1];
        *p=*p-1;
    }
}

void display(int r, int w[])
{
    int i;
    printf("\nyour array is:\n");
    for(i=0;i<=r-1;i++)
        printf("%d\t",*(w+i));
    printf("\n");
}

int main()
{
    int a[50],i,n,choice;
    char s;
    printf("enter the size of array: ");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        printf("enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    display (n,a);
    printf("\n\nchoices:");
    printf("\npress 1 to insert element.");
    printf("\npress 2 to delete element.");
    printf("\npress 3 to display the elements.");
    printf("\npress 4 to stop");
    while (i=5)
    {
    printf("\nenter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        insert(&n,a);
        break;
    case 2:
        delete(&n,a);
        break;
    case 3:
        display(n, a);
        break;
    case 4:
        exit(1);
    default:
        printf("\nenter valid input");
        break;
    }
    }
    return 100;
}

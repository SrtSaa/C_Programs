#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<time.h>
#define MAX 25


void show(int* m)
{
    int i;
    for(i = 0; i<MAX; i++)
        printf("%d\t",m[i]);
}

int l_search(int* m, int key)
{
    int i;
    printf("\n\n");
    for(i = 0; i<MAX; i++)
        printf("%d\t",m[i]);
    printf("\n\n");

    for(i = 0; i<MAX; i++)
        if(m[i] == key)
            return 1;
    return 0;
}

int b_search(int* n, int key)
{
    int l = 0, r = MAX;
    while(l<=r)
    {
        if(key==n[(l+r)/2])
            return 1;
        else if(key>n[(l+r)/2])
            l=((l+r)/2)+1;
        else if(key<n[(l+r)/2])
            r=((l+r)/2)-1;
    }
    return 0;
}

void S_sort(int* a)
{
    int i, j, min, c;
    for(i = 0; i < MAX; i++)
    {
        min = i;
        for(j = i+1; j < MAX; j++)
            if(a[j] < a[min])
                min = j;
        c = a[i];
        a[i] = a[min];
        a[min] = c;
    }
}

int main()
{
    int *ptrlist;
    int i,key,s;
    time_t start,end;

    ptrlist = (int *)malloc(MAX*sizeof(int));
    if(ptrlist == NULL)
    {
        printf("Memory is not allocated.\n");
        exit(0);
    }
    else
        for(i = 0; i<MAX; i++)
            ptrlist[i] = rand();

    printf("\nUnsorted(random) LIST:\n");
    show(ptrlist);

    S_sort(ptrlist);

    printf("\nSorted LIST:\n");
    show(ptrlist);

    printf("\nEnter value to search: ");
    scanf("%d",key);

    printf("\nHell0\n");
    start = time(NULL);
    s = l_search(ptrlist,key);
    end = time(NULL);
    if(s==1)
        printf("\nKey found!!");
    else
        printf("\nKey not found!!");
    printf("Time taken to search: %d",difftime(end,start));







}


#include <stdio.h>

int main()
{
    char    a       ='Z';
    int     b       =456;
    float   c       =345.034;
    double  d       =7654.90;
    char    str[]   ="Check";

    printf("Size of a: %d\n",sizeof(a));
    printf("\nSize of b: %d\n",sizeof(b));
    printf("\nSize of c: %d\n",sizeof(c));
    printf("\nSize of d: %d\n",sizeof(d));
    printf("\nSize of str: %d\n",sizeof(str));

    return 0;
}


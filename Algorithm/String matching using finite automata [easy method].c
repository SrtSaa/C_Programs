//String matching using finite automata [easy method] (srt_saa)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int n,i,j,st,d,x,f=0;
char s[100];
int** z;
int* e;

void input();

int main()
{
    printf("This code works for DFA, not for NFA.");
    printf("\n\nEnter string: ");
    gets(s);
    x=strlen(s);

    input();

    i=0;
    j=st;
    while(i<x)
    {
        if(s[i]=='a')
            j=z[j][0];
        else if(s[i]=='b')
            j=z[j][1];
        else
        {
            printf("\nResult: String not matched.\n");
            exit(1);
        }
        i++;
    }
    for(i=0;i<d;i++)
        if(j==e[i])
        {
            f=1;
            break;
        }
    if(f==1)
        printf("\nResult: String matched.\n");
    else
        printf("\nResult: String not matched.\n");
}

void input()
{
    printf("\nEnter no of states of DFA: ");
    scanf("%d",&n);
    z=(int**)malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
        z[i]=(int*)malloc(2*sizeof(int));
    printf("Enter the transition table for DFA:\n");
    for(i=0;i<n;i++)
        scanf("%d%d",&z[i][0],&z[i][1]);
    printf("\nEnter the starting state: ");
    scanf("%d",&st);
    printf("Enter the no of accepting/end states: ");
    scanf("%d",&d);
    e=(int*)malloc(d*sizeof(int*));
    printf("Enter the accepting/end states:\n");
    for(i=0;i<d;i++)
        scanf("%d",&e[i]);
}

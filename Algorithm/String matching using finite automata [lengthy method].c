//String matching using finite automata [lengthy method] (srt_saa)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char s[100];
int x;
int s0(int);
int s1(int);
int s2(int);
int s3(int);
int s4(int);

int main()
{
    int f=0;
    puts("enter a string: ");
    gets(s);
    x=strlen(s);
    f=s0(0);
    if(f==0)
        printf("String not matched.");
    else
        printf("String matched.");
}

int s0(int m)
{
    int i=m,u,v;
    if(i>x)
        return 0;
    else
    {
        if(s[i]=='a')
            u=s1(i+1);
        else if(s[i]=='b')
            v=s1(i+1);
        else
            return 0;
    }
    if(u==1||v==1)
        return 1;
    else
        return 0;
}

int s1(int m)
{
    int i=m,u,v;
    if(i>x)
        return 0;
    else
    {
        if(s[i]=='a')
            u=s2(i+1);
        else if(s[i]=='b')
            v=s2(i+1);
        else
            return 0;
    }
    if(u==1||v==1)
        return 1;
    else
        return 0;
}

int s2(int m)
{
    int i=m,u,v,y,z;
    if(i>x)
        return 0;
    else
    {
        if(s[i]=='a')
        {
            u=s2(i+1);
            v=s3(i+1);
        }
        else if(s[i]=='b')
        {
            y=s3(i+1);
            z=s4(i+1);
        }
        else
            return 0;
    }
    if(u==1||v==1||y==1||z==1)
        return 1;
    else
        return 0;
}

int s3(int m)
{
    int i=m,u;
    if(i>x)
        return 0;
    else
    {
        if(s[i]=='a')
            return 0;
        else if(s[i]=='b')
            u=s4(i+1);
        else
            return 0;
    }
    if(u==1)
        return 1;
    else
        return 0;
}

int s4(int m)
{
    int i=m,u=0;
    if(i==x)
        return 1;
    else
    {
        if(s[i]=='a')
            u=s4(i+1);
        else if(s[i]=='b')
            return 0;
        else
            return 0;
    }
    if(u==1)
        return 1;
    else
        return 0;
}

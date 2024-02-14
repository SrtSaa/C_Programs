//Tic Tac Toe (srt_saa)

#include<stdio.h>
#include<stdlib.h>

void display(char [][3]);
void check(char [][3],int,int);

int main()
{
    char a[3][3];
    int i,j,k=1,x,f;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            a[i][j]='-';
    printf("Match Begins...\n");
    display(a);

    while(k<10)
    {
        if(k%2==0)
            printf("\n\nEnter position for player 2: ");
        else
            printf("\n\nEnter position for player 1: ");
        scanf("%d",&f);

        if(f>0&&f<10)
        {
            x=1;
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    if(x==f)
                        break;
                    x++;
                }
                if(x==f)
                    break;
            }
            if(a[i][j]=='-')
            {
                if(k%2==0)
                    a[i][j]='O';
                else
                    a[i][j]='X';
                k++;
            }
            else
            {
                printf("Your given position is already ticked. Enter new position.");
                continue;
            }
        }
        else
        {
            printf("Enter position between 1-9.");
            continue;
        }

        display(a);
        if(k>5)
        {
            for(i=0;i<3;i++)
                if((a[i][0]!='-')&&(a[i][0]==a[i][1])&&(a[i][1]==a[i][2]))
                    check(a,i,j=0);

            for(j=0;j<3;j++)
                if(a[0][j]!='-'&&(a[0][j]==a[1][j])&&(a[1][j]==a[2][j]))
                    check(a,i=0,j);

            if((a[1][1]!='-')&&(((a[0][0]==a[1][1])&&(a[1][1]==a[2][2]))||((a[0][2]==a[1][1])&&(a[1][1]==a[2][0]))))
                check(a,i=1,j=1);
        }
    }
    printf("\n\nMatch Drawn.\n\n");
}

void display(char x[][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
            printf("\t%c",x[i][j]);
    }
}

void check(char x[][3],int m,int n)
{
    if(x[m][n]=='X')
        printf("\n\n\tPlayer 1 wins.\n\n");
    else
        printf("\n\n\tPlayer 2 wins.\n\n");
    exit(0);
}

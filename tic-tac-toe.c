#include <stdio.h>
#include <string.h>
int main()
{
    char a[3][3];
    int i,j,c,t,u,l,m,w=0,turn=0,d,e,play=1,wina=0,winb=0;
    char b[10],v[10];
    printf("\t\t\tenter first player name   ");
    scanf("%s",&b);
    fflush(stdin);
    printf("\t\t\tenter second players name   ");
    scanf("%s",&v);
    do
    {
        w=0,turn=0,play=1;
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                a[i][j]=' ';
            }
        }

        do
        {
            c=0;
            turn++;
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    if(a[i][j]!=' ')
                    {
                        c++;
                    }
                    if (c==9)
                    {
                        printf("\n\nthe game is draw");
                        {
                            play=0;
                        }
                    }
                }
            }
            printf("\n\t\t\t\t TIC - TAC - TOE");
            for(t=0; t<3; t++)
            {
                printf("\n\t\t\t\t %c | %c | %c ",a[t][0],a[t][1],a[t][2]);
                if(t<1)
                {
                    printf("\t\t\t%s|%s",b,v);
                }
                if(t==1)
                {
                    printf("\t\t\t");
                    for(i=0; i<strlen(b)-1; i++)
                    {
                        printf(" ");
                    }
                    printf("%d|%d",wina,winb);
                }
                if(t<2)
                {
                    printf("\n\t\t\t\t---|---|---");
                }
            }
            if(turn%2==0)
            {
                printf("\n\n\t%s to play 'O' write coordinates : ",v);
                scanf("%d",&d);
                scanf("%d",&e);
                d--;
                e--;
            }
            if(turn%2!=0)
            {
                printf("\n\n\t%s to play 'X' write coordinates : ",b);
                scanf("%d",&d);
                scanf("%d",&e);
                d--;
                e--;
            }
            if(a[d][e]!=' ')
            {
                printf("\n\n\twrong input");
                turn--;
            }
            for(l=0; l<3; l++)
            {
                for(m=0; m<3; m++)
                {
                    if((a[l][m]==' ')&&(l==d)&&(m==e)&&(turn%2==0))
                    {
                        a[l][m]='O';
                    }
                    else if((a[l][m]==' ')&&(l==d)&&(m==e)&&(turn%2!=0))
                    {
                        a[l][m]='X';
                    }
                }
            }
            for(u=0; u<3; u++)
            {
                if((a[u][0]==a[u][1])&&(a[u][1]==a[u][2])&&(turn%2==0)&&(a[u][0]!=' '))
                {
                    winb++;
                    printf("\n\t\t\t\t TIC - TAC - TOE");
                    for(t=0; t<3; t++)
                    {
                        printf("\n\t\t\t\t %c | %c | %c ",a[t][0],a[t][1],a[t][2]);
                        if(t<1)
                        {
                            printf("\t\t\t%s|%s",b,v);
                        }
                        if(t==1)
                        {
                            printf("\t\t\t");
                            for(i=0; i<strlen(b)-1; i++)
                            {
                                printf(" ");
                            }
                            printf("%d|%d",wina,winb);
                        }
                        if(t<2)
                        {
                            printf("\n\t\t\t\t---|---|---");
                        }
                    }
                    printf("\n\t\t%s won :",v);
                    play=0;
                }
                else if((a[u][0]==a[u][1])&&(a[u][1]==a[u][2])&&(turn%2!=0)&&(a[u][0]!=' '))
                {
                    wina++;
                    printf("\n\t\t\t\t TIC - TAC - TOE");
                    for(t=0; t<3; t++)
                    {
                        printf("\n\t\t\t\t %c | %c | %c ",a[t][0],a[t][1],a[t][2]);
                        if(t<1)
                        {
                            printf("\t\t\t%s|%s",b,v);
                        }
                        if(t==1)
                        {
                            printf("\t\t\t");
                            for(i=0; i<strlen(b)-1; i++)
                            {
                                printf(" ");
                            }
                            printf("%d|%d",wina,winb);
                        }
                        if(t<2)
                        {
                            printf("\n\t\t\t\t---|---|---");
                        }
                    }
                    printf("\n\t\t%s won :",b);
                    play=0;
                }
                else if((a[0][u]==a[1][u])&&(a[1][u]==a[2][u])&&(turn%2==0)&&(a[0][u]!=' '))
                {
                    winb++;
                    printf("\n\t\t\t\t TIC - TAC - TOE");
                    for(t=0; t<3; t++)
                    {
                        printf("\n\t\t\t\t %c | %c | %c ",a[t][0],a[t][1],a[t][2]);
                        if(t<1)
                        {
                            printf("\t\t\t%s|%s",b,v);
                        }
                        if(t==1)
                        {
                            printf("\t\t\t");
                            for(i=0; i<strlen(b)-1; i++)
                            {
                                printf(" ");
                            }
                            printf("%d|%d",wina,winb);
                        }
                        if(t<2)
                        {
                            printf("\n\t\t\t\t---|---|---");
                        }
                    }
                    printf("\n\t\t%s won :",v);
                    play=0;
                }
                else if((a[0][u]==a[1][u])&&(a[1][u]==a[2][u])&&(turn%2!=0)&&(a[0][u]!=' '))
                {
                    wina++;
                    printf("\n\t\t\t\t TIC - TAC - TOE");
                    for(t=0; t<3; t++)
                    {
                        printf("\n\t\t\t\t %c | %c | %c ",a[t][0],a[t][1],a[t][2]);
                        if(t<1)
                        {
                            printf("\t\t\t%s|%s",b,v);
                        }
                        if(t==1)
                        {
                            printf("\t\t\t");
                            for(i=0; i<strlen(b)-1; i++)
                            {
                                printf(" ");
                            }
                            printf("%d|%d",wina,winb);
                        }
                        if(t<2)
                        {
                            printf("\n\t\t\t\t---|---|---");
                        }
                    }
                    printf("\n\t\t%s won :",b);
                    play=0;
                }
            }
            if((a[0][0]==a[1][1])&&(a[1][1]==a[2][2])&&(turn%2==0)&&(a[0][0]!=' '))
            {
                winb++;
                printf("\n\t\t\t\t TIC - TAC - TOE");
                for(t=0; t<3; t++)
                {
                    printf("\n\t\t\t\t %c | %c | %c ",a[t][0],a[t][1],a[t][2]);
                    if(t<1)
                    {
                        printf("\t\t\t%s|%s",b,v);
                    }
                    if(t==1)
                    {
                        printf("\t\t\t");
                        for(i=0; i<strlen(b)-1; i++)
                        {
                            printf(" ");
                        }
                        printf("%d|%d",wina,winb);
                    }
                    if(t<2)
                    {
                        printf("\n\t\t\t\t---|---|---");
                    }
                }
                printf("\n\t\t%s won :",v);
                play=0;
            }
            else if((a[0][0]==a[1][1])&&(a[1][1]==a[2][2])&&(turn%2!=0)&&(a[0][0]!=' '))
            {
                wina++;
                printf("\n\t\t\t\t TIC - TAC - TOE");
                for(t=0; t<3; t++)
                {
                    printf("\n\t\t\t\t %c | %c | %c ",a[t][0],a[t][1],a[t][2]);
                    if(t<1)
                    {
                        printf("\t\t\t%s|%s",b,v);
                    }
                    if(t==1)
                    {
                        printf("\t\t\t");
                        for(i=0; i<strlen(b)-1; i++)
                        {
                            printf(" ");
                        }
                        printf("%d|%d",wina,winb);
                    }
                    if(t<2)
                    {
                        printf("\n\t\t\t\t---|---|---");
                    }
                }
                printf("\n\t\t%s won :",b);
                play=0;
            }
            if((a[0][2]==a[1][1])&&(a[1][1]==a[2][0])&&(turn%2==0)&&(a[2][0]!=' '))
            {
                winb++;
                printf("\n\t\t\t\t TIC - TAC - TOE");
                for(t=0; t<3; t++)
                {
                    printf("\n\t\t\t\t %c | %c | %c ",a[t][0],a[t][1],a[t][2]);
                    if(t<1)
                    {
                        printf("\t\t\t%s|%s",b,v);
                    }
                    if(t==1)
                    {
                        printf("\t\t\t");
                        for(i=0; i<strlen(b)-1; i++)
                        {
                            printf(" ");
                        }
                        printf("%d|%d",wina,winb);
                    }
                    if(t<2)
                    {
                        printf("\n\t\t\t\t---|---|---");
                    }
                }
                printf("\n\t\t%s won :",v);
                play=0;
            }
            else if((a[0][2]==a[1][1])&&(a[1][1]==a[2][0])&&(turn%2!=0)&&(a[2][0]!=' '))
            {
                wina++;
                printf("\n\t\t\t\t TIC - TAC - TOE");
                for(t=0; t<3; t++)
                {
                    printf("\n\t\t\t\t %c | %c | %c ",a[t][0],a[t][1],a[t][2]);
                    if(t<1)
                    {
                        printf("\t\t\t%s|%s",b,v);
                    }
                    if(t==1)
                    {
                        printf("\t\t\t");
                        for(i=0; i<strlen(b)-1; i++)
                        {
                            printf(" ");
                        }
                        printf("%d|%d",wina,winb);
                    }
                    if(t<2)
                    {
                        printf("\n\t\t\t\t---|---|---");
                    }
                }
                printf("\n\t\t%s won :",b);
                play=0;
            }
        }
        while(play>0);
        printf("\n\nto play again : type 1  ");
        scanf("%d",&w);
    }
    while(w==1);
    return 0;
}

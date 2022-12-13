#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void chushihua(char (*game)[11],int n)
{
    int i,j;
    int count=0;
    srand((unsigned)time(NULL));
    int suijitime1,suijitime2;
    for(i=0;i<=10;i++)
        for(j=0;j<=10;j++)
            game[i][j]=' '; 
    
    for(i=1;1;i++)
    {
        suijitime1=rand()%10+1;
        suijitime2=rand()%10+1;
        if(game[suijitime1][suijitime2]==' '&&game[suijitime1][suijitime2]!='*')
        {
            game[suijitime1][suijitime2]='*';
            if(count==n)break;
            count++;
        }
        if(count==n)break; 

    }
    printf("\n");
    for(i=1;i<=9;i++)
        for(j=1;j<=9;j++)
        {
            printf(" %c |",game[i][j]);
            if(j==9)printf("\n------------------------------------\n");
        }
    

}
int  test(char (*game)[11],char (*real)[11],int x,int y,int the_whole)
{
    int count=0;
    if(game[x][y]=='*')
    {
        printf("中雷！");
        the_whole=0;
    }
    if(game[x][y-1]=='*')count++;
    if(game[x][y+1]=='*')count++;
    if(game[x-1][y-1]=='*')count++;
    if(game[x-1][y]=='*')count++;
    if(game[x-1][y+1]=='*')count++;
    if(game[x+1][y-1]=='*')count++;
    if(game[x+1][y]=='*')count++;
    if(game[x+1][y+1]=='*')count++;
    switch(count)
    {
        case 0:real[x][y]=' ';break;
        case 1:real[x][y]='1';break;
        case 2:real[x][y]='2';break;
        case 3:real[x][y]='3';break;
        case 4:real[x][y]='4';break;
        case 5:real[x][y]='5';break;
        case 6:real[x][y]='6';break;
        case 7:real[x][y]='7';break;
        case 8:real[x][y]='8';break;
    }
    if(game[x][y-1]!='*')real[x][y-1]=' ';
    if(game[x][y+1]!='*')real[x][y+1]=' ';
    if(game[x-1][y-1]!='*')real[x-1][y-1]=' ';
    if(game[x-1][y]!='*')real[x-1][y]=' ';
    if(game[x-1][y+1]!='*')real[x-1][y+1]=' ';
    if(game[x+1][y-1]!='*')real[x+1][y-1]=' ';
    if(game[x+1][y]!='*')real[x+1][y]=' ';
    if(game[x+1][y+1]!='*')real[x+1][y+1]=' ';

    
    
    printf("\n");
    for(int i=1;i<=9;i++)
        for(int j=1;j<=9;j++)
        {
            printf(" %c |",real[i][j]);
            if(j==9)printf("\n--------------------------------\n");
        }
    return the_whole;
}

void delete(char (*game)[11],char (*real)[11],int x,int y)
{
    if(game[x][y]=='*')
    {
        printf("中了");
        game[x][y]=' ';
        real[x][y]='*';
    }
    printf("\n");
    for(int i=1;i<=9;i++)
        for(int j=1;j<=9;j++)
        {
            printf(" %c |",real[i][j]);
            if(j==9)printf("\n--------------------------------\n");
        }
}




int panduan(char (*game)[11])
{
    int gone=0;
    for(int i=1;i<=9;i++)
        for(int j=1;j<=9;j++)
            if(game[i][j]=='*')gone=1;
    return gone;
}
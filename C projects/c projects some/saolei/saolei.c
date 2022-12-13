#include<stdio.h>
#include"game.h"
int main()
{
    int n;
    int flag,the_whole=1;
    int x,y;
    char game[11][11];
    char real[11][11];
    printf("请输入你要扫几个雷");
    scanf("%d",&n);
    chushihua(game,n);
    for(int i=0;i<=10;i++)
        for(int j=0;j<=10;j++)
            real[i][j]='#';
    
    while(the_whole)
    {
        printf("排雷输入1，选中输入0");
        scanf("%d",&flag);

        if(flag==1)
        {
            //排雷
            printf("你要排雷的区域为：");
            scanf("%d%d",&x,&y);
            delete(game,real,x,y);
        }
        else if(flag==0)
        {
            //选中
            printf("你要排除区域为:");
            scanf("%d%d",&x,&y);
            the_whole=test(game,real,x,y,the_whole);
        }
        if(the_whole==1)the_whole=panduan(game);
    }
    printf("游戏结束");
}
#include<stdio.h>
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int mul(int x,int y)
{
    return x*y;
}
int div(int x,int y)
{
    return x/y;
}
int main()
{
    int x,y,input;
    int ret;
    int (*arr[4])(int,int)={add,sub,mul,div};
    printf("请输入你要进行的运算:");
    printf("\n1.加 2.减 3.乘 4.除\n");
    scanf("%d",&input);
    printf("请输入两个数：");
    scanf("%d%d",&x,&y);
    ret=(*arr[input-1])(x,y);
    printf("\n\n结果为:%d",ret);
}
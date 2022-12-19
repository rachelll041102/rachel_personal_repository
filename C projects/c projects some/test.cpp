#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int n,name[100]={0};
    int jige=0,youxiu=0;
    float x,j;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&name[i]);
    for(int i=0;i<n;i++)
    {
        if(name[i]>=85)youxiu++;
        if(name[i]>=60)jige++;
    }
    x=youxiu/n*100;
    j=jige/n*100;
    printf("%f.0%%",j);
    printf("\n%f.0%%",x);
    
}
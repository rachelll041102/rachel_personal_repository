#include<stdio.h>
int main()
{
    int a,b=10;
    int *p;
    *p=b;
    printf("%#x\n",p);
    a=*p++;
    printf("%d\n",a);
    printf("%#x\n",p);
}
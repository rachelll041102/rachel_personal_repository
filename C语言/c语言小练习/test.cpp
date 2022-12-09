#include<stdio.h>
int main()
{
    int a[3]={1,2,3};
    int * p=&a[1];
    printf("%#x",p);
}
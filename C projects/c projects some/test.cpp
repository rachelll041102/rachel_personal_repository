#include<stdio.h>
int fn(int *)
{
    printf(".");
}
int main()
{
    int a;
    int *p;
    p=&a;
    fn(p);
}
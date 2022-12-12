#include<stdio.h>
#include<stdlib.h>
int fn(int *)
{
    printf(".");
}
int main()
{
    void *p;
    int cnt;
    while ((p=malloc(100*1024*1024)))
    {
        cnt++;
    }
    printf("%d",cnt);
    free(p);

}
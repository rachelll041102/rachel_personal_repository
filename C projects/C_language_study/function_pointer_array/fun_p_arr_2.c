#include<stdio.h>
void FileFunc()
{
printf("FileFunc\n");
}
void EditFunc()
{
printf("EditFunc\n");
}
void main()
{
typedef void(*funcp)();
funcp pfun=FileFunc;
pfun();
pfun=EditFunc;
pfun();
}
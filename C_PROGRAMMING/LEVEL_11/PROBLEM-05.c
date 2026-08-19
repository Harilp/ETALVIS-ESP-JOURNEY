/*Write a function to copy integers from one location to another location.

Function Name: memcopy(src, dst, size)*/
#include <stdio.h>
void memcopy(int scr[],int dst[],int size);
int main()
{
    int scr[5]={1,2,3,4,5};
    int dst[5],i;
    memcopy(scr,dst,5);
    for(i=0;i<5;i++)
    {
        printf("dst[%d]=%d\n",i,dst[i]);
    }
}
void memcopy(int scr[],int dst[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        dst[i]=scr[i];
    }
}
/*Write a function to compare a set of integers.
Print Success or Failure.

Function Name:  
memcomp(src, dst, size)*/
#include <stdio.h>
void memcomp(int src[],int dst[],int size);
int main()
{
    int size,i;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int src[size];
    int dst[size];
    printf("Enter the src array:\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&src[i]);
    }
    printf("Enter the dst array:\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&dst[i]);
    }
    memcomp(src,dst,size);
}
void memcomp(int src[],int dst[],int size)
{
    int i=0;
    while(i<size)
    {
        if(src[i]!=dst[i])
        {
            printf("Failure\n");
            return;
        }
        i++;
    }
    printf("Success\n");
}
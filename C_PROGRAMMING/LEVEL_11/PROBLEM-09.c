/*Write a function to concatenate two integer arrays into a single array.

Function Name:  
intcon(src1, size1, src2, size2, dst)*/
#include <stdio.h>
void intcon(int src1[],int  size1,int src2[],int size2,int dst[]);
int main()
{
    int size1,size2,y;
    printf("Enter the stc1 array size1:\n");
    scanf("%d",&size1);
    printf("Enter the stc2 array size2:\n");
    scanf("%d",&size2);
    y=size1+size2;
    int src1[size1],src2[size2],dst[y],i;
    
    printf("Enter the stc1 array:\n");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&src1[i]);
    }
    printf("Enter the stc2 array:\n");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&src2[i]);
    }
    
    intcon(src1,size1,src2,size2,dst);

}
void intcon(int src1[],int  size1,int src2[],int size2,int dst[])
{
    int i,y,x;
    x=0;
    y=size2+size1;
    for(i=0;i<size1;i++)
    {
        dst[i]=src1[i];
    }
    for(i=size1;i<y;i++)
    {
        dst[i]=src2[x];
        x++;
    }
    for(i=0;i<y;i++)
    {
        printf("%d",dst[i]);
    }
}
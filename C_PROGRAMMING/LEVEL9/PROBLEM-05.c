/*Get 5 numbers from the user, arrange them in ascending order, and print the same.*/
#include <stdio.h>
int main()
{
    int a[5],i,c,b,t;
    printf("Enter the number:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    c=0;//a[0]
    b=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]<b)
        {
            b=a[i];
            c=i;
        }
        
        if(i==4)
        {
            t=a[0];
            a[0]=b;
            a[c]=t;
        }
    }
    b=a[1];//a[1]
    c=1;
    for(i=1;i<5;i++)
    {
        if(a[i]<b)
        {
            b=a[i];
            c=i;
        }
        
        if(i==4)
        {
            t=a[1];
            a[1]=b;
            a[c]=t;
        }
    }
     b=a[2];//a[2]
    c=2;
    for(i=2;i<5;i++)
    {
        if(a[i]<b)
        {
            b=a[i];
            c=i;
        }
        
        if(i==4)
        {
            t=a[2];
            a[2]=b;
            a[c]=t;
        }
    }
     b=a[3];//a[3]
    c=3;
    for(i=3;i<5;i++)
    {
        if(a[i]<b)
        {
            b=a[i];
            c=i;
        }
        
        if(i==4)
        {
            t=a[3];
            a[3]=b;
            a[c]=t;
        }
    }
     b=a[4];//a[4]
    c=4;
    for(i=4;i<5;i++)
    {
        if(a[i]<b)
        {
            b=a[i];
            c=i;
        }
        
        if(i==4)
        {
            t=a[4];
            a[4]=b;
            a[c]=t;
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    
    return 0;
}
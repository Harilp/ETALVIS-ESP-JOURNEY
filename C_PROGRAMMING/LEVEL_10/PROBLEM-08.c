/*Get a string of numbers up to 50 digits and validate the number.*/
#include <stdio.h>
int main()
{
    char a[51],i,val;
    i=0;
    printf("Enter the string:");
    scanf("%s",a);
    while(a[i]!='\0')
    {
        val=1;
        if(a[i]<'0' || a[i]>'9')
        {
            val=0;
        }
        if(val==1)
        {
            printf("a[%d] valid\n",i);
        }
        if(val==0)
        {
            printf("a[%d] invalid\n",i);
        }
        i++;

    }

    
    
    return 0;
}
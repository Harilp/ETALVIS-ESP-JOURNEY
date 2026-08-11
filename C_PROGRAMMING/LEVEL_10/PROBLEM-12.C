/*Convert an integer array of up to 50 digits to a character array and print using
printf("%s", ....);*/
#include <stdio.h>
int main()
{
    int a[50],i;
    char b[51];
    printf("Enter the integer one by one and enter -1 to finish befor 50 digits:");
    for(i=0;i<50;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==-1)
        {
            break;
        }
        b[i]=a[i]+'0';
    }
    b[i]='\0';
    printf("%s",b);
    
    return 0;
}
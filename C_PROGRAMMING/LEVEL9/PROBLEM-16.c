/*Adjust the carry in an integer array.(i.e.convet the 2-digit number
 into single digits and add the carry to the next number)*/
#include <stdio.h>
int main()
{
    int a[5],b[5],s[6],carry,sum,i;
    printf("enter the numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter next numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    carry=0;
    for(i=4;i>=0;i--)
    {
        sum=a[i]+b[i]+carry;
        carry=sum/10;
        s[i+1]=sum%10;
    }
    s[0]=carry;
    for(i=0;i<6;i++)
    {
        printf("%d",s[i]);
    }
    return 0;
}
/*Get two numbers of up to 50 digits and perform addition, then print the result.*/
#include <stdio.h>
void getnumbers(char *number1,char *number2);
void addnumbers(char *number1,char *number2,char *result);
int main()
{
    char number1[51],number2[51],result[52];
    getnumbers(number1,number2);
    addnumbers(number1,number2,result);

}
void getnumbers(char *number1,char *number2)
{
    int i;
    printf("Enter the number1:\n");
    scanf("%50s",number1);
    printf("Enter the number2:\n");
    scanf("%50s",number2);
    for(i=0;i<50;i++)
    {
        if (number1[i] != '\0') number1[i] -= '0';
        if (number2[i] != '\0') number2[i] -= '0';
    }
}
void addnumbers(char *number1,char *number2,char *result)
{
    int sum,carry,i;
    carry=0;
    for(i=49;i>=0;i--)
    {
        sum=number1[i]+number2[i]+carry;
        carry=sum/10;
        result[i]=sum%10;
        
    }
    printf("%d",i);
}//move the numbers to the last to handel smaller numbers 
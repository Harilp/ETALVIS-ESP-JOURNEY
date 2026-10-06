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
        for(;number1[i] != '\0';)
        {
         number1[i] -= '0';
         i++;
        }
  
    break;
    }
    int j=50;
    for(i=i-1;i>=0;i--)
    {
        number1[j] = number1[i];
        j--;
    }

    for(j=j;j>=0;j--)
    {
        number1[j]=0;
    }
    for(i=0;i<50;i++)
    {
      for(;number2[i] != '\0';)
        {
        number2[i] -= '0';
        i++;
        }
    break;
    }
    int k=50;
    for(i=i-1;i>=0;i--)
    {
        number2[k] = number2[i];
        k--;
    }
      for(k=k;k>=0;k--)
    {
        number2[k]=0;
    }
}
void addnumbers(char *number1,char *number2,char *result)
{
    int sum,carry,i,j;
    carry=0;
    for(i=50;i>=0;i--)
    {
        sum=number1[i]+number2[i]+carry;
        carry=sum/10;
        result[i]=(sum%10)+'0';
    }
    result[51]='\0';
    j=0;
    while(result[j] == '0' && result[j]!='\0')
    {
        j++;       
    }
    if(result[j]=='\0')
    {
        printf("0\n");
    }
    else 
    {
        printf("%s\n", &result[j]);
    }
   
}//move the numbers to the last to handel smaller numbers 
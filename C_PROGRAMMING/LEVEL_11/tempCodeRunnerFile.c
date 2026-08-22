void strcon(char src1[],char src2[],char dst[])
{
    int i=0;
    int y=0;
    while(src1[i]!='\0')
    {
        dst[i]=src1[i];
        i++;
    }
    while(src2[y]!='\0')
    {
        dst[i]=src2[y];
        i++;
        y++;
    }
    dst[i]='\0';
    printf("%s",dst);
}
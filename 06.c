//program which accepts numbers from user and display its mnultiplication of factors
//input = 12 
//output = 144 (1*2*3*4*6)
int MulFact(int);
#include<stdio.h>
int main()
{
    int ivalue = 0 ;
    int iret = 0 ;
    printf("Enter the number \n");
    scanf("%d",&ivalue);
    iret = MulFact(ivalue);
    printf("%d",iret);
    return 0 ;
}
int MulFact(int ino)
{
    int ifact = 1 ;
    int icnt = 0 ;
    for(icnt=1;icnt<ino;icnt++)
    {
        if((ino%icnt==0))
        {
            ifact = ifact * icnt ;
        }
    }
    return ifact ;
}
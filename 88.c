/*
Accept character from user and check whether it is digit or not
input :7 
output : it is a digit
input : d
output : it is not a digit 
*/
#include<stdio.h>
#include<stdbool.h>
bool CheckDigit(char C)
{
    if((C>='0')&&(C<='9'))
    {
        return true ;
    }
    else
    {
        return false;
    }
}
int main()
{
    char ch = '\0';
    bool bRet = false ;
    printf("Enter character\n");
    scanf("%c",&ch);
    bRet=CheckDigit(ch);
    if(bRet==true)
    {
        printf("it is a digit\n");
    }
    else
    {
        printf("it is not a digit\n");
    }
    return 0 ;
}
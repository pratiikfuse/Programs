/*
Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input :
%
Output : TRUE
Input :
d
Output : FALSE
*/
#include<stdio.h>
#include<stdbool.h>
bool Symbol(char ch)
{
    if(( (ch>='A')&&(ch<='Z')) || ((ch>='a')&&(ch<='z')) || ((ch>='0')&&(ch<='9')) )
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = false ;
    printf("Enter Character\n");
    scanf("%c",&cValue);
    bRet=Symbol(cValue);
    if(bRet==true)
    {
        printf("It is Special Symbol\n");
    }
    else
    {
        printf("It is not special Symbol\n");
    }
    return 0 ;
}
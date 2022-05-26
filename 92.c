/*
Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.
Input :  Q
Output : q

Input :  m
Output : M

Input :  4
Output : 4

Input :  %
Output : %

*/
#include<stdio.h>
char ToggleCase(char ch)
{
    char c = '\0';
    if(ch>='a'&&ch<='z')
    {
        c = ch - 32 ;
        return c ;
    }
    else if(ch>='A'&&ch<='Z')
    {
        c = ch + 32 ;
        return c ;
    }
    else
    {
        return ch ;
    }
}
int main()
{
    char cRet ='\0';
    char cValue = '\0';
    printf("Enter Character\n");
    scanf("%c",&cValue);
    cRet=ToggleCase(cValue);
    printf("Toggle case is : %c\n",cRet);
    return 0 ;
}

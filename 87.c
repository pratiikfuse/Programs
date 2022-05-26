/*
Accept character from user check whther it is capital or not
input : A
output : it is capital
input : a
output : it is not capital
*/
#include<stdio.h>
#include<stdbool.h>
bool CheckCapital(char Capital)
{
    if(Capital>='A'&&Capital<='Z')
    {
        return true ;
    }
    else
    {
        return false ;
    }
}
int main()
{
    char ch = '\0';
    bool bRet = false ;
    printf("Enter character\n");
    scanf("%c",&ch);
    bRet = CheckCapital(ch);
    if(bRet==true)
    {
        printf("it is capital\n");
    }
    else
    {
        printf("it is not capital\n");
    }

    return 0 ;
}
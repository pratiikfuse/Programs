//Accept character from user and chechk whther it is alphabet or not 
//input : F
//output : true
//input : &
//output : false
#include<stdio.h>
#include<stdbool.h>
bool CheckAlphabet(char alpha)
{
    if(((alpha>='A')&&(alpha<='Z'))||((alpha>='a')&&(alpha<='z')))
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
    printf("Enter the character\n");
    scanf("%c",&ch);
    bRet = CheckAlphabet(ch);
     if(bRet==true)
     {
         printf("true\n");
     }
     else
     {
         printf("false\n");
     }

    return 0 ;
}
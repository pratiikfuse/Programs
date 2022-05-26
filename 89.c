/*
Accept character and check whether it is small case or not
input : a
output : it is smallcase
input : A
output : it is not smallcase
*/
#include<stdio.h>
#include<stdbool.h>
bool CheckSmall(char C)
{
  if((C>='a')&&(C<='z'))
  {
      return true;
  }
  else
  {
      return false ;
  }
}
int main()
{
    char ch ='\0';
    bool bRet = false;
    printf("Enter Character\n");
    scanf("%c",&ch);
    bRet=CheckSmall(ch);
    if(bRet==true)
    {
        printf("it is small case\n");
    }
    else
    {
        printf("it is not small case\n");
    }
    return 0 ;
}
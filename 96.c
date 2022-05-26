/*
Write a program which accept string from user and count number of
capital characters.
Input : “Marvellous Multi OS”
Output : 4
*/
#include<stdio.h>
int Count(char *Brr)
{
    int iCount  = 0 ;
    while(*Brr!='\0')
    {
       if(*Brr<='Z'&&*Brr>='A')
       {
           iCount++;
       }
       Brr++;
    }
    return iCount ;
}
int main()
{
    char Arr[100];
    int iRet = 0;
    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);
    iRet=Count(Arr);
    printf("number of Capital characters are : %d\n",iRet);
    return 0 ;
}
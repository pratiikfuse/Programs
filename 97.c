/*
Write a program which accept string from user and count number of
small characters.
Input : “Marvellous”
Output : 9
*/
#include<stdio.h>
int Count(char *Brr)
{
    int iCount  = 0 ;
    while(*Brr!='\0')
    {
       if(*Brr<='z'&&*Brr>='a')
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
    printf("number of small characters are : %d\n",iRet);
    return 0 ;
}
/*
Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.

Input : “MarvellouS”
Output : 6 (8-2)
*/
#include<stdio.h>
int Diff(char *Brr)
{
    int Small = 0;
    int Capital = 0;
    int Difference = 0;
    while(*Brr!=0)
    {
        if((*Brr>='A')&&(*Brr<='Z'))
        {
            Capital++;
        }
        else if((*Brr>='a')&&(*Brr<='z'))
        {
          Small++;
        }
        Brr++;
    }
    Difference = Small-Capital;
    return Difference ;
}
int main()
{
    char Arr[100];
    int iRet=0;
    printf("Enter String\n");
    scanf("%s",Arr);
    iRet=Diff(Arr);
    printf("DIfferene between frqequency of small and Capital Characters is :%d\n",iRet);
    return 0 ;
}
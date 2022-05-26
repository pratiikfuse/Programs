/*
Write a program which accept string from user and check whether
it contains vowels in it or not.
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE
*/
#include<stdio.h>
#include<stdbool.h>
bool CheckVowel(char *Brr)
{
    bool bVowel = false;
    while(*Brr!='\0')
    {
      
        if((*Brr=='A')||(*Brr=='E')||(*Brr=='I')||(*Brr=='O')||(*Brr=='U'))
        {
          bVowel = true ;
          break;
        }
        else if((*Brr=='a')||(*Brr=='e')||(*Brr=='i')||(*Brr=='o')||(*Brr=='u'))
        {
          bVowel = true ;
          break;
        }
        Brr++;
    }
    return bVowel;
}

int main()
{
    char Arr[100];
    bool bRet = false ;
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);
    bRet=CheckVowel(Arr);
    if(bRet==true)
    {
        printf("it contains vowel\n");
    }
    else
    {
        printf("It does not contain vowel\n");
    }

    return 0 ;
}
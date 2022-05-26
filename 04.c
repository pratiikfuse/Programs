// Accept one character from user and check whether that character is vowel or not 
// input : E   output : TRUE
// input : d   output : FALSE

#include<stdio.h>
#include<stdbool.h>
bool checkvowel(char);
int main()
{
    bool bret = false ;
    char cvalue = '\0';
    printf("Enter character \n");
    scanf("%c",&cvalue);
   bret = checkvowel(cvalue);
   if(bret==true)
   {
       printf("It is a vowel \n");
   }
   else
   {
       printf("It is not a vowel\n");
   }
    return 0 ;
}
bool checkvowel(char Cletter)
{
    if((Cletter=='a')||(Cletter=='e')||(Cletter=='i')||(Cletter=='o')||(Cletter=='u'))
    {
        return true ;
    }
    else if((Cletter=='A')||(Cletter=='E')||(Cletter=='I')||(Cletter=='O')||(Cletter=='U'))
    {
       return true ;
    }
    else
    {
        return false ;
    }
}
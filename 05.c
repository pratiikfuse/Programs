/*
Accept one character from user and check whether that character is vowel
(a,e,i,o,u) or not.
Input : E Output : TRUE
Input : d Output : FALSE
*/
#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char ch)
{
   if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
   {
   	 return true;
   }
   else
   {
   	return false;
   }
}
int main()
{
	char cValue = '\0';
	char cRet = '\0';
	printf("Enter Character\n");
	scanf("%c",&cValue);

    cRet = CheckVowel(cValue);
    if(cRet==true)
    {
    	printf("It is Vowel\n");
    }
    else
    {
    	printf("It is not a vowel\n");
    }

	return 0;
}
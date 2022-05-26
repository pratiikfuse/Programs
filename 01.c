/*
Accept one character from user and convert case of that character.
Input : a Output : A
Input : D Output : d
*/
#include<stdio.h>
char ToggleCase(char ch)
{
	char cResult = '\0';
	if((ch>='a')&&(ch<='z'))
	{
       cResult = ch - 32 ;
	}
	else
	{
		cResult = ch + 32 ;
	}
	
	return cResult;
}
int main()
{
	char cValue = '\0';
	char cRet = '\0';
	printf("Enter the character\n");
	scanf("%c",&cValue);

	cRet = ToggleCase(cValue);

	printf("Converted Case is : %c\n",cRet);

	return 0 ;
}
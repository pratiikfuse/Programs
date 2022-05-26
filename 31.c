/*
Accept number from user and display below pattern.
Input : 5
Output : A  B  C  D  E
*/
#include<stdio.h>
void Display(int);
int main()
{
	int iValue = 0;
	printf("Enter Number\n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}
void Display(int iNo)
{
	int i = 0;
	char ch = 'A';
	for(i=1;i<=iNo;i++,ch++)
	{
		printf("%c\t",ch);
	}
	printf("\n");
}
//program which accepts number from user and return the count of digits in between 3 and 7
//input : 2395
//output : 1
//input : 1018
//output : 0
//input : 9922
//output : 0
#include<stdio.h>
int CountDigits( int);
int main()
{
    int iValue = 0 ;
	printf("%d\n",sizeof(iValue));
	int iRet = 0   ;
	printf("Enter the number \n");
	scanf("%d",&iValue);
	iRet= CountDigits(iValue);
	printf("Count of odd digits between 3 & 7 is  :%d\n",iRet);
	return 0 ;
}
int CountDigits(int Ino)   
{
	int iDigit = 0;     
	int iCnt = 0 ;  

	if(Ino<0)
	{
		Ino = -Ino ;
	}  

	while(Ino>0)
	{
		iDigit= Ino%10 ;
		if((iDigit<7)&&(iDigit>3))
		{
			iCnt++ ;
		}
		Ino = Ino/10 ;
	}
	return iCnt ;
}
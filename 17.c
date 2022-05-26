//program which accepts number from user and return the count of odd digits
//input : 2395
//output : 3
//input : 1018
//output : 2
#include<stdio.h>
int CountOdd(int);
int main()
{
	int iValue = 0 ;
	int iRet = 0   ;
	printf("Enter the number \n");
	scanf("%d",&iValue);
	iRet= CountOdd(iValue);
	printf("Count of odd digits is  :%d\n",iRet);
	return 0 ;
}
int CountOdd(int Ino)   
{
	int iDigit = 0;     
	int iCnt = 0 ;  

	if(Ino<0)
	{
		Ino = -Ino ;
	}  

	while(Ino>0)
	{
		iDigit= Ino % 10;
		if((iDigit%2)!=0)
		{
			iCnt++ ;
		}
		Ino = Ino/10 ;
	}
	return iCnt ;

}
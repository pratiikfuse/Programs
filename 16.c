// program which accepts number from user and return the count of even digit
//input : 2395 
//output : 1
//input : 1018
//output : 2
#include<stdio.h>
int CountEven(int);
int main()
{
	int iValue = 0 ;
	int iRet = 0   ;
	printf("Enter the number \n");
	scanf("%d",&iValue);
	iRet= CountEven(iValue);
	printf("Count of even digits is  :%d\n",iRet);
	return 0 ;
}
int CountEven(int Ino)   
{
	int iDigit = 0;     
	int iCnt = 0 ;  
	if(Ino==0)
	{
		return 1 ;
	}  

	if(Ino<0)
	{
		Ino = -Ino ;
	}  

	while(Ino>0)
	{
		iDigit= Ino % 10;
		if((iDigit%2)==0)
		{
			iCnt++ ;
		}
		Ino = Ino/10 ;
	}
	return iCnt ;

}
//program to present frequency of 4 in it ;
//input : 9440
//output : 2
#include<stdio.h>
int CountFour(int);
int main()
{
	int iValue = 0 ;
	int iRet = 0   ;
	printf("Enter the number \n");
	scanf("%d",&iValue);
	iRet= CountFour(iValue);
	printf("Frequency of 4 is :%d\n",iRet);
	return 0 ;
}
int CountFour(int Ino)   
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
		if(iDigit==4)
		{
			iCnt++;
		}
		Ino = Ino/10 ;
	}
	return iCnt ;

}
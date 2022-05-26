//Program which accepts number from user and count frequency of 2 in it 
//input : 2395
//output : 1
//input : 1018
//output : 0
#include<stdio.h>
int CountTwo(int);
int main()
{
	int iValue = 0 ;
	int iRet = 0   ;
	printf("Enter the number \n");
	scanf("%d",&iValue);
	iRet= CountTwo(iValue);
	printf("Frequency of 2 is :%d\n",iRet);
	return 0 ;
}
int CountTwo(int Ino)   
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
		if(iDigit==2)
		{
			iCnt++;
		}
		Ino = Ino/10 ;
	}
	return iCnt ;

}
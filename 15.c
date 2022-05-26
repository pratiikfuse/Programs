//program which accepts number from user and count frequncy of such a digits which are less than 6
//input : 2395
//output : 3
//input : 1018
//output : 3
//input : 966672
//output : 1
#include<stdio.h>
int CountFreq(int);
int main()
{
	int iValue = 0 ;
	int iRet = 0   ;
	printf("Enter the number \n");
	scanf("%d",&iValue);
	iRet= CountFreq(iValue);
	printf("Frequency of digits which are less than 6 is :%d\n",iRet);
	return 0 ;
}
int CountFreq(int Ino)   
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
		if(iDigit<6)
		{
			iCnt++;
		}
		Ino = Ino/10 ;
	}
	return iCnt ;

}
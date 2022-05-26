//Accept number from user and return difference between summation of even digits and summation of odd digits
//input : 2395
//output : -15 (2-17)
//input : 1018
//output : 6
#include<stdio.h>
int diff(int);
int main()
{
	int iValue = 0 ;
	int iRet = 0 ;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	iRet = diff(iValue);
	printf("Differnce between sum of Even and Odd digits is :%d",iRet);

	return 0 ;
}
int diff(int iNo)
{
	int iDigit = 0 ;
	int iOddSum = 0 ;
	int iEvenSum = 0 ;
	int iDiff = 0 ;
	if(iNo<0)
	{
		iNo = -iNo ;
	}
	while(iNo>0)
	{
		iDigit = iNo%10 ; //5  
		if((iDigit%2)==0)
		{
			iEvenSum = iEvenSum + iDigit ;
		}
		else if((iDigit%2)!=0)
		{
			iOddSum = iOddSum +iDigit ;
		}

		iNo = iNo / 10 ;
	}
	iDiff = iEvenSum - iOddSum ;
	return iDiff ;
}
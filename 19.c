//program which accepts number from user and return multiplication of all the digits
//input : 2395
//output : 270
//input : 1018
//output : 0
//input : 922432
//output : 864
#include<stdio.h>
int MulDigits(int);
int main()
{
	int iValue = 0 ;
	int iRet = 0 ;
	printf("Enter the number \n");
	scanf("%d",&iValue);
	iRet=MulDigits(iValue);
	printf("Multiplication of all the digits is :%d",iRet);

	return 0 ;
}
int MulDigits(int iNo)
{
	int iDigit = 0 ; // 521
	int iMul = 1 ;
	if(iNo<0)
	{
		iNo = -iNo ;
	}
	if(iNo == 0)
	{
		return 0 ;
	}
    while(iNo>0)
    {
      iDigit = iNo % 10 ;
      iMul = iMul * iDigit ;
      iNo = iNo/10 ;
    }
    return iMul ;


}
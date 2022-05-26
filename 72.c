//Return difference betweem Frequency of Even & odd numbers
//Input : 7
//Elements : 85 66 3 80 93 88 90
//output : 1(4-3)
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iSize)
{
    int i = 0 ;
    int iCntEven = 0 ;
    int iCntOdd = 0 ;
    for(i=0;i<iSize;i++)
    {
        if((Arr[i]%2)==0)
        {
          iCntEven++;
        }
        else
        {
            iCntOdd++;
        }
    }
    return (iCntEven - iCntOdd) ;
    
  
}
int main()
{
    int *ptr = NULL ;
    int iLength = 0 ;
    int i = 0 ;
    int iRet = 0 ;

    printf("Enter length of an array\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(sizeof(int)*iLength);

    printf("Enter numbers\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Frequency(ptr,iLength);
    printf("Difference between frequency of Even and Odd number is  : %d",iRet);

   
    
    return 0 ;
}
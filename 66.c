//Accept numbers from user and return difference between sum of odd and even elements 
//Input : 6
//Elements : 85 66 3 80 93 88
//output : 53(234-181)
#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iSize)
{
    int i = 0 ;
    int  iSumEven = 0 ;
    int iSumOdd = 0 ;
    int Diff = 0 ;

    for(i=0;i<iSize;i++)
    {
        if((Arr[i]%2)==0)
        {
            iSumEven = iSumEven + Arr[i];
        }
        else
        {
           iSumOdd = iSumOdd + Arr[i];
        }
    }
    Diff = iSumEven - iSumOdd ;
    return Diff ;
}
int main()
{
    int *ptr = NULL ;
    int iLength = 0 ;
    int iRet = 0 ;
    int i = 0 ;

    printf("Enter length of an array\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(sizeof(int)*iLength);

    printf("Enter numbers\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet=Difference(ptr,iLength);

    printf("Difference is :%d\n",iRet);
    
    return 0 ;
}
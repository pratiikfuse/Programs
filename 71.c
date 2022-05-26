//Return Frequency of Even numbers 
//Input : 6
//Elements : 85 66 3 80 93 88
//output : 3
#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int iSize)
{
    int i = 0 ;
    int iCnt = 0 ;
    for(i=0;i<iSize;i++)
    {
        if((Arr[i]%2)==0)
        {
            iCnt++;
        }
    }
    return iCnt;
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

    iRet = CountEven(ptr,iLength);
    printf("Frequency of Even number is : %d",iRet);

   
    
    return 0 ;
}
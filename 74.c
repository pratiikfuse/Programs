//return frequency of 11
//input : N = 5
//input : 85  11  3  15  11 111d
//output : 2
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int Frequency(int Arr[],int iSize)
{
    int i = 0 ;
    int iCnt = 0 ;
    for(i=0;i<iSize;i++)
    {
      if(Arr[i]==11)
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
    int iRet = 0;

    printf("Enter length of an array\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(sizeof(int)*iLength);

    printf("Enter numbers\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }
    iRet = Frequency(ptr,iLength);
    printf("Frequency of 11 is :%d\n",iRet);
    return 0 ;
}
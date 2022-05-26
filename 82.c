/*
Accept N numberd from user and return the smallest number
input : N : 6
        elements : 85 66 3 66 93 88
output : 3
*/
#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[],int iSize)
{
    int i = 0 ;
    int iMin = Arr[i];
    for(i=0;i<iSize;i++)
    {
      if(Arr[i]<iMin)
      {
          iMin = Arr[i];
      }
    }
    return iMin;
}
int main()
{
    int iLength = 0;int iRet = 0 ;
    printf("Enter size of Array\n");
    scanf("%d",&iLength);

    int *ptr = NULL ;
    ptr =(int*)malloc(sizeof(int)*iLength);
    printf("Enter elements\n");
    for(int i = 0 ; i< iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }
    iRet = Maximum(ptr,iLength);
    printf("smallest number is : %d",iRet);
    free(ptr);
    return 0 ;
}
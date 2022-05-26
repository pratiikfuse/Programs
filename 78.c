/*
Accept N numbersm from user and accept one number as NO,return
inderx of last occurence of that NO.

input : N : 6 
        NO : 66
        Elements : 85  66  3  66  93  88
output : 3
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int CheckIndex(int Arr[],int iSize,int iNo)
{
  int i = 0 ;
  int index = 0 ;
  for( i = 0 ;i<iSize ; i++)
  {
      if(Arr[i]==iNo)
      {
          index = i ;
          
      }
  }
  return  index ;
}
int main()
{
    int iLength = 0 ;int iValue = 0 ;int iRet = 0 ;
    int *ptr = NULL ;
    printf("Enter length of an Array\n");
    scanf("%d",&iLength);
    ptr = (int*)malloc(sizeof(int)*iLength);
    printf("Enter Elements\n");
    for(int i = 0 ; i<iLength ; i++)
    {
    scanf("%d",&ptr[i]);
    }
    printf("Enter the number which index you want to display\n");
    scanf("%d",&iValue);
    iRet = CheckIndex(ptr,iLength,iValue);
    printf("The last occured index of given number is : %d",iRet);

    free(ptr)


    return 0 ;
}
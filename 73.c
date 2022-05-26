//Check whether  11 is Present or no in the given array
//input : N = 5
//input : 30  11 554 6 4564
//output : number is present
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool CheckWhether(int Arr[],int iSize)
{
    int i = 0 ;
    for(i=0;i<iSize;i++)
    {
      if(Arr[i]==11)
      {
          break ;
      }
    }
    if(i==iSize)
    {
        return false ;
    }
    else
    {
        return true ;
    }
  
}
int main()
{
    int *ptr = NULL ;
    int iLength = 0 ;
    int i = 0 ;
    bool bRet = false ;

    printf("Enter length of an array\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(sizeof(int)*iLength);

    printf("Enter numbers\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }
    bRet = CheckWhether(ptr,iLength);
    if(bRet==true)
    {
        printf("Number is Present\n");
    }
    else
    {
        printf("Number is Absent\n");
    }  
    return 0 ;
}
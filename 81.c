/*
Accept number from user and return the largest number
input : N : 6
        Elements : 85 66 3 66 93 88
output : 93
*/
#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[],int iSize)
{
    int i = 0 ;
    int iMax = Arr[i];
    for(i=0;i<iSize;i++)
    {
      if(Arr[i]>iMax)
      {
          iMax = Arr[i];
      }
    }
    return iMax ;
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
    printf("Largest number is : %d",iRet);
    free(ptr);
    return 0 ;
}
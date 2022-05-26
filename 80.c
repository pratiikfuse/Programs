/*
Accept numbers from user and return product of all odd elements
input : N : 6
        Elements : 15  66  3  70  10  8
output : 45
*/
#include<stdio.h>
#include<stdlib.h>
int OddProduct(int Arr[],int iSize)
{
    int mul = 1 ;
    for(int i = 0 ; i<iSize ; i++)
    {
       if((Arr[i]%2)!=0)
       {
           mul = mul * Arr[i];
       }
    }
    if(mul==1)
    {
      return 0 ;
    }
    return mul ;
    
}

int main()
{
    int iLength = 0 ;int iRet = 0 ;
    int *ptr = 0;
    printf("Enter length of an Array\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(sizeof(int)*iLength);

    printf("Enter elements \n");
    for(int i = 0 ; i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }
    iRet = OddProduct(ptr,iLength);
    printf("Product of odd numbers is : %d",iRet);
    free(ptr);
    return 0 ;
}
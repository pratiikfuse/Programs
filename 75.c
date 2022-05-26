//Accept number and Return Frequency of that number 
//input : No = 98, N = 4
//input : 98 98 101 100
//output : 2
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iSize,int iNo)
{
    int i = 0 ;
    int iCnt = 0 ;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]==iNo)
        {
            iCnt++;
        }

    }
    return iCnt;

}
int main()
{
    int *ptr = NULL ;
    int i = 0 ;
    int iValue = 0 ;
    int iLength = 0 ;
    int iRet = 0 ;
    printf("Enter length of Array\n");
    scanf("%d",&iLength);
    ptr =(int*)malloc(sizeof(int)*iLength);
    printf("Enter Elments\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Enter number whose frequency you want to check\n");
    scanf("%d",&iValue);
    iRet = Frequency(ptr,iLength,iValue);
    printf("Freuency of given number is :%d",iRet);

    return 0 ;
}
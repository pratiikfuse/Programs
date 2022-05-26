//program which accepta range from user and display addition of  All even  numbers between that range ;
//input : 23  30
//output :  108
//input : -10
#include<stdio.h>
int Addition(int,int);
int main()
{
    int iFirst = 0 ;
    int iLast = 0 ;
    int iRet = 0 ;
    printf("Enter the first number\n");
    scanf("%d",&iFirst);
    printf("Enter the last number\n");
    scanf("%d",&iLast);
    iRet=Addition(iFirst,iLast);
    if(iRet==0)
    {
        printf("Invalid Range\n");
        return 0 ;
    }
    printf("Addition is : %d\n",iRet);

    return 0 ;
}
int  Addition(int first , int last)
{
    int iCnt = first ;
    int iSum = 0 ;
    if((first>last)||(first<0)||(last<0))
    {
      return 0 ;
    }
   
   for(iCnt = first ; iCnt<=last ; iCnt++)
   {
      if((iCnt%2)==0)
      {
          iSum = iSum + iCnt ;
      }
   }
   return iSum;
}
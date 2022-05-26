//program which accepta range from user and display All the even numbers between that range ;
//input : 23  35
//output :  24    26    28    30    32    34  
#include<stdio.h>
void DisplayRange(int,int);
int main()
{
    int iFirst = 0 ;
    int iLast = 0 ;
    printf("Enter the first number\n");
    scanf("%d",&iFirst);
    printf("Enter the last number\n");
    scanf("%d",&iLast);
    DisplayRange(iFirst,iLast);
    return 0 ;
}
void DisplayRange(int first , int last)
{
   int iCnt = first ;
    if(first>last)
    {
      printf("Invalid Input\n");
    }
   for(iCnt = first ; iCnt<=last ; iCnt++)
   {
      if((iCnt%2)==0)
      {
          printf("%d\t",iCnt);
      }
   }
}
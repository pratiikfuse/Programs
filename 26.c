//program which accepta range from user and display All the numbers between that range ;
//input : 23  35
//output : 23  24  25  26  27  28  29  30  31  32  33  34  35
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
       printf("%d\t",iCnt);
   }
}
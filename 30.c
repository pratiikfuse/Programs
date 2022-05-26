//program which accepta range from user and display All the numbers between that range ;
//input : 23  35
//output : 35  34  33  32  31  30  29  28  27  26  25  24  23 
//input : -10   2
// output : 2   1   0   -1  - 2   -3   -4   -5   -6   -7   -8   -9   -10  
//input : 90  18
//output : invalid Range 
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
      printf("Invalid Range\n");
    }
   for(iCnt = last ; iCnt>=first ; iCnt--)
   {
       printf("%d\t",iCnt);
   }
}
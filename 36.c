#include<stdio.h>
void Display(int,int);
int main()
{
    int iValue1 ,iValue2 = 0 ;
    printf("Enter Rows\n");
    scanf("%d",&iValue1);
    printf("Enter columns\n");
    scanf("%d",&iValue2);
    Display(iValue1,iValue2);
    return 0 ;
}
void Display(int rows , int columns)
{
  int iCnt = 0 ;
  int iCnt2 = 0 ;
  //updater
  if(rows<0)
  {
      rows = - rows ;
  }
  if(columns<0)
  {
      columns  = - columns ;
  }

  for(iCnt = 1 ; iCnt <= rows ; iCnt++)
  {
      for(iCnt2 = 1 ; iCnt2 <= columns ; iCnt2++)
      {
          printf("*\t");

      }
      printf("\n");
  }
}

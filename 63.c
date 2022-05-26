/*
input : iRow = 6 , iCol  = 6 

output : 

     *   *   *   *   *   *
     *               *   *
     *           *       *
     *       *           *
     *   *               *
     *   *   *   *   *   *  


*/
#include<stdio.h>
void Display(int,int);
int main()
{
    int iValue1,iValue2 = 0 ;
    printf("Enter number of rows\n");
    scanf("%d",&iValue1);
    printf("Enter number of columns\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    return 0 ;
}

void Display(int iRow,int iCol)
{
    int i,j = 0 ;
    int num = 0 ;
    for(i=1;i<=iRow;i++,num++)
    {
        for(j=1;j<=iCol;j++)
        {
          if((i==1)||(i==iRow))
          {
              printf("*\t");
          }
          else if((j==1)||(j==iCol))
          {
            printf("*\t");
          }
          else if(j==(iCol-num))
          {
              printf("*\t");
          }
          else
          {
            printf("\t");
          }
        }
        printf("\n");
    }
}
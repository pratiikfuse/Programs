/*
input : iRow = 5 , iCol  = 5

output :  
       1   2   3   4   5
       1   2           5 
       1       3       5
       1           4   5
       1   2   3   4   5

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
          if(i==1||i==iRow)
          {
              printf("%d\t",j);
          }
          else if(j==1||j==iCol)
          {
            printf("%d\t",j);
          }
          else if(i==j)
          {
              printf("%d\t",j);
          }
          else
          {
            printf("\t");
          }
           
        }
        printf("\n");
    }
}
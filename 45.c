/*
input : iRow = 3 , iCol = 4
output : 1    2    3    4
         5    6    7    8 
         9    10   11   12   
*/      
#include<stdio.h>
void Display(int,int);
int main()
{
    int iValue1 = 0;
    int iValue2 = 0 ;
    printf("Enter number of rows\n");
    scanf("%d",&iValue1);
    printf("Enter number of columns\n");
    scanf("%d",&iValue2);
    Display(iValue1,iValue2);
}
void Display(int iRow , int iCol)
{
    int i = 0 ;
    int j = 0 ;
    int num =  1 ;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",num);
            num++;
        }
        printf("\n");
    }
}

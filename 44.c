/*
input : iRow = 4 , iCol = 5
output :   4   4   4   4   4
           3   3   3   3   3
           2   2   2   2   2
           1   1   1   1   1
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
    for(i=iRow ; i>= 1 ; i--)
    {
        for(j=1 ; j<=iCol ; j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}

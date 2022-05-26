/*
input : iRow = 3 , iCol = 5
output : A    A    A    A    A
         B    B    B    B    B
         C    C    C    C    C  
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
    char ch = '\0';
    for(i = 1,ch = 'A' ; i <= iRow ; i++)
    {
        for(j =1 ; j <= iCol ; j++)
        {
            printf("%c\t",ch);
        }
        ch++;
        printf("\n");
    }
}

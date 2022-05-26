/*
input : iRow = 4 , iCol = 4
output : A   B   C   D    
         a   b   c   d
         A   B   C   D
         a   b   c   d
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
    char capital = '\0';
    char small = '\0';
    for(i = 1 ; i <= iRow ; i++)
    {
        for(capital='A',small = 'a',j = 1 ; j<=iCol ; j++)
        {
            if((i%2)==0)
            {
              printf("%c\t",small);
              small++;
            }
            else
            {
                printf("%c\t",capital) ;
                capital++;
            }
        }
        printf("\n");
    }
}

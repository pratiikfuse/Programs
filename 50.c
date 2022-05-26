#include<stdio.h>
void Display(int,int);
int main()
{
    int iValue1 ,iValue2 = 0 ;
    printf("Enter Number of Rows\n");
    scanf("%d",&iValue1);
    printf("Enter Number of Columns\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0 ;
}
void Display(int iRow , int iCol)
{
    int i, j = 0 ;
    for(i = 1 ; i<=iRow ; i++)
    {
        for(j = 1 ; j<=iCol ; j++)
        {
            if(i==iRow||i==1)
            {
                printf("%d\t",j);
            }
            else if((j>1)&&(j<iCol))
            {
              printf("*\t");
            }
            else
            {
              printf("%d\t",j);
            }
        }
        printf("\n");
    }
}
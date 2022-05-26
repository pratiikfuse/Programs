// input : 8
// output : 2  4  6  8  10  12  14  16
#include<stdio.h>
void  Display(int);
int main()
{
    int iValue = 0 ;
    printf("Enter number\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0 ;
}
void Display(int iNo)
{
    int iCnt = 0 ;
    int i = 0;
    for(iCnt =  1 ; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt*2);
    }
}
//write a program which accepts numbers from use and display its factors  in decreasing order
//input : 12
//output : 6  4   3   2   1
#include<stdio.h>
void DisplayFact(int);
int main()
{
    int ivalue = 0 ;
    printf("Enter the number \n");
    scanf("%d",&ivalue);

    DisplayFact(ivalue);

    return 0 ;
}
void DisplayFact(int ino1)
{
    int icnt = 0 ;
    int ino2 = ino1 - 1 ;
    for(icnt=ino2;icnt>=1;icnt--)
    {
        if(ino1%icnt==0)
        {
            printf("%d\t",icnt);
        }
    }
}
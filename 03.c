//program which accepts one number from user and print that number of even numbers on screen
// input : 7
// output : 2  4  6  8  10  12  14
#include<stdio.h>
void printeven(int);

int main()
{
    int ivalue = 0 ;
    printf("Enter NUmber\n");
    scanf("%d",&ivalue);
    printeven(ivalue);
    return 0 ;
}

void printeven(int ino)
{
    if(ino<=0)
    {
        return ;
    }
    int icnt = 0 ;
    int ieven = 0 ;
    for(icnt=1;icnt<=ino;icnt++)
    {
        ieven = ieven + 2 ;
        printf("%d\t",ieven);
    }
}
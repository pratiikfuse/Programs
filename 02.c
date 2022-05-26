//program to print even factors of that number
//input : 24
//output :   2  4  6  8  
#include<stdio.h>
void DisplayFactor(int);
int main()
{
    int ivalue = 0;
    printf("Emter the number\n");
    scanf("%d",&ivalue);
    DisplayFactor(ivalue);
    return 0 ;
}
void DisplayFactor(int ino)
{
    int i = 0 ;
    if(ino<0)
    {
        ino = -ino;
    }
    for(i=1;i<ino;i++)
    {
        if((ino%i==0)&&(i%2==0))
        {
            printf("%d\t",i);
        }

    }
}


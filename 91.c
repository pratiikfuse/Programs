/*
Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255.
*/
#include<stdio.h>
void DisplayASCII()
{
    int i = 0;
    printf("Decimal\tOctal\tHexadecimal\tCharacter\n");
    for(i=0;i<=255;i++)
    {
        printf("%d\t%o\t%x\t%c",i,i,i,i);
        printf("\n");
    }
    
}
int main()
{
    DisplayASCII();
}
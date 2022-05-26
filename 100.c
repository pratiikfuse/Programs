/*
Write a program which accept string from user and display it inn
reverse order.
Input : “MarvellouS”
Output : “SuollevraM”
*/
#include<stdio.h>
void Reverse(char *Brr)
{ int size = 0;
  char Crr[100];
    while(*Brr!='\0')
    {
        size++;
        Brr++;
    }
    for(int i = 1,J=0; i<=size;i,J++)
    {
      Crr[J]= (Brr[(size-i)]);
    }
    printf("%s",Crr);

}
int main()
{
    char Arr[100];
    printf("Enter String\n");
    scanf("%[^'\n]s",Arr);
    Reverse(Arr);

    return 0 ;

}
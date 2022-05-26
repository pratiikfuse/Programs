/*
Accept N  Nnumbers from user and accept Range , Display all elements
from that range

input : N : 6 
        start : 60
        end   : 90
        Elements : 85  66  3  76  93  88
output : 66  76  88
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void Display(int Arr[],int iSize,int start,int end)
{
    int i = 0 ;
    printf("Number in the range are\n");
    for(i=0;i<iSize;i++)
    {
        if((Arr[i]>start)&&(Arr[i]<end))
        {
            printf("%d\t",Arr[i]);
        }
    }
}

int main()
{
    int iLength = 0 ;int iValue = 0 ;
    int *ptr = NULL ;int iStart = 0 ; int iEnd = 0;
    printf("Enter length of an Array\n");
    scanf("%d",&iLength);
    ptr = (int*)malloc(sizeof(int)*iLength);
    printf("Enter Elements\n");
    for(int i = 0 ; i<iLength ; i++)
    {
    scanf("%d",&ptr[i]);
    }
    printf("Enter starting number of range\n");
    scanf("%d",&iStart);
    printf("Ending number of range\n");
    scanf("%d",&iEnd);

    Display(ptr,iLength,iStart,iEnd);

    free(ptr);
    


    return 0 ;
}
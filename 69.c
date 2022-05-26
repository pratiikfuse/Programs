//Display  elements which are divisible by 5 & 3
//Input : 6
//Elements : 85 66 3 15 93 88
//output : 15
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iSize)
{
    int i = 0 ;
    printf("Numbers which are divisible by 5 & 3 are :\n");
    for(i=0;i<iSize;i++)
    {
        if(((Arr[i]%3)==0)&&((Arr[i]%5)==0))
        {
            printf("%d\n",Arr[i]);
        }
    }
}
int main()
{
    int *ptr = NULL ;
    int iLength = 0 ;
    int i = 0 ;

    printf("Enter length of an array\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(sizeof(int)*iLength);

    printf("Enter numbers\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }

    Display(ptr,iLength);

   
    
    return 0 ;
}
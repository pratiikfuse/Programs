//Accept N numbers frome user and Accept one anoyher number as No
// check whether No is present or not 
// input : N : 6
//         No : 66
// Elements  : 85  66  3  66  93  88 
//output : NUmber is Present
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool CheckWhether(int Arr[],int iSize, int iNum)
{
    bool bAns = false ;
    for(int i = 0 ; i<iSize ; i++)
    {
        if(Arr[i]==iNum)
        {
          bAns = true ;
          break;
        }
    }
    return bAns ;
}
int main()
{
    int iLength = 0 ;int iNo = 0 ;
    int *ptr = NULL ;
    bool bRet = false ;
    printf("Enter length of an Array\n");
    scanf("%d",&iLength);
    ptr=(int*)malloc(sizeof(int)*iLength);
    printf("Enter Elements\n");
    for(int i = 0 ; i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Enter the number you want to check whether it is present in an Array or not\n");
    scanf("%d",&iNo);
    bRet = CheckWhether(ptr,iLength,iNo);
    if(bRet==true)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is Absent\n");
    }
    free(ptr);

    return 0 ;
}
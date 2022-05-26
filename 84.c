/*
Accept N numbers from user and display numbers which contains 3 digits in it 
input : N : 6
Elements : 8225  665  3  76  953  858
output : 665  953  858
*/
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iSize)
{
    if(Arr==NULL)
    {
        return ;
    }
    int i,j = 0;
    int num  = 0 ;
    int iCnt = 0;
    for(i=0;i<iSize;i++)
    {
     num=Arr[i];
     iCnt=0;
      while(num!=0)
      {
        num= num/10;
        iCnt++;
      }
      
      if(iCnt==3)
      {
       printf("%d\t",Arr[i]);
      }
    }

}
int main()
{
    int *ptr = NULL ;int iLength = 0;
    printf("Enter length of array\n");
    scanf("%d",&iLength);
    ptr=malloc(sizeof(int)*iLength);
    printf("Enter Elments\n");
    for(int i  = 0 ;i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }
    Display(ptr,iLength);
   

    return 0 ;
}
/*
Accept N numbers from user and Display summation of digit of each number
input : N : 6
Elements : 8225  665  3  76  953  858
output : 17  17  3  13  17  21
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
    int iSum = 0 ;
    int iDigit = 0;
    for(i=0,j=1;i<iSize;i++,j++)
    {
     num=Arr[i];
     iSum = 0 ;
      while(num!=0)
      {
          iDigit=num%10;
          iSum = iSum + iDigit ;
          num = num/10;
      }
      printf("Sum of no.%d's digit is :%d\n",j,iSum);
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
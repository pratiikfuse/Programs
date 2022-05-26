/*Accept N numbers from user and return the difference between largest and smallest number
input : N : 6 
Elements : 85  66  3  66  93  88
outptut : 90(93-3)
*/
#include<stdio.h>
#include<stdlib.h>
int Diff(int Arr[],int iSize)
{
    int i = 0 ;
    int iMax = Arr[i];
    int iMin = Arr[i];
 
    for(i= 0; i<iSize; i++)
    {
      if(Arr[i]>iMax)
      {
          iMax = Arr[i];
      }
      else if(Arr[i]<iMin)
      {
         iMin = Arr[i];
      }
    }
    return iMax-iMin;

}
int main()
{
    int *ptr = NULL ;int iLength = 0;
    int iRet = 0;
    printf("Enter length of array\n");
    scanf("%d",&iLength);
    ptr=malloc(sizeof(int)*iLength);
    printf("Enter Elments\n");
    for(int i  = 0 ;i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }
    iRet= Diff(ptr,iLength);
    printf("Difference between largest and smallest number is :%d",iRet);

    return 0 ;
}
//write a program which accepts numbers from user and return summation of it's non factors
// input : 12
//output : 50
#include<stdio.h>
int SumNFact(int);     //function declaration

int main()
{
    int ivalue = 0 ;
    int iret = 0 ;
    printf("Enter the number \n");
    scanf("%d",&ivalue);

    iret = SumNFact(ivalue);
    printf("%d",iret);
    return 0 ;

}
int SumNFact(int ino)       //function defination
{
   auto int isum = 0 ;
   register int icnt = 0;
   for(icnt=1;icnt<ino;icnt++)
   {
       if(ino%icnt!=0)
       {
           isum = isum + icnt ;
       }
   }
   return isum ;
}
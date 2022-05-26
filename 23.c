//Program which Accepts Distance in  kilometre and conver it into metre
//input : 5
//output : 5000
#include<stdio.h>
int KMtoMetre(int);
int main()
{
    int iValue = 0 ;
    int iRet = 0 ;
    printf("Enter the Distance in KM\n");
    scanf("%d",&iValue);
    iRet = KMtoMetre(iValue);
    printf("Distance in Metres is : %d Meters\n",iRet);

    return 0 ;
}
int KMtoMetre(int KM)
{
    if(KM<0)
    {
        KM=-KM ;
    }
    int Metre = 0 ;
    Metre =  KM * 1000 ;
    return Metre ;
}

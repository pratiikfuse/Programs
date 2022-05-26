//program which accepts area in square feet and convert it into sqaure metre (1 feet = 0.0929 square metre)
//input : 5
//output : 0.464515
#include<stdio.h>
double SquareMeter(float);
int main()
{
    float fValue = 0.0 ;
    double dRet = 0.0 ;
    printf("Enter the area in square feet\n");
    scanf("%f",&fValue);
    dRet = SquareMeter(fValue);
    printf("Area is : %f square meter\n",dRet);
    return 0 ;

}
double SquareMeter(float Sqfeet)
{
    double Sqmeter = 0.0 ;
    Sqmeter = Sqfeet*0.0929 ;
    return Sqmeter ;
}
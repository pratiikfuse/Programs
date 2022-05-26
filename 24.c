//program to accept temperature in Fahrenheit and convert it into celsius ;
// input : 10
//output : -12.222
#include<stdio.h>
double FhtoCs(float);
int main()
{
    float fValue = 0.0 ;
    double dRet = 0.0 ;
    printf("Enter Temperature in Fahrenheit\n");
    scanf("%f",&fValue);
    dRet=FhtoCs(fValue);
    printf("Temperature is : %.3f Celsius",dRet);

    return 0 ;
}
double FhtoCs(float Farhenheit)
{
  double Celsius = (Farhenheit-32)*5/9;
   return Celsius ;
}
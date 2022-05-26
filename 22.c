//Accept width and height of the rectangle from user and calculate its area
//input : 5.3   9.78
//output : 51.834
#include<stdio.h>
double AreaRec(float,float);
int main()
{
    float fHeight = 0.0 ;
    float fWidth = 0.0 ;
    double dRet = 0.0 ;
    printf("Enter the height\n");
    scanf("%f",&fHeight);
    printf("Enter the width\n");
    scanf("%f",&fWidth);
    dRet = AreaRec(fHeight,fWidth);
    printf("Area of Rectangle is : %f",dRet);

    return 0 ;
}
double AreaRec(float height , float width)
{
    if(height<0)
    {
        height= -height ;
    }
    if(width<0)
    {
        width = -width ;
    }
    double Area = 0.0 ;
    Area = height * width ;
    return Area ;
}
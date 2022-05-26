//Accepts Radius of Circle from user and Calculate its area
//input : 5.3
//output : 88.2026
//Input : 10.4
//Output : 339.6224
#include<stdio.h>
double Area(float);
int main()
{
	float fradius = 0.0 ;
	double dRet = 0.0 ;
	printf("Enter the Radius\n");
    scanf("%f",&fradius);

	dRet=Area(fradius);
	printf("The Area is :%.4f \n",dRet);

	return 0 ;
}
double Area(float radius)
{
	float Pi = 3.14 ;
	double area = 0.0 ;
	if(radius<0)
	{
		radius = - radius ;
	}

	area = Pi * radius * radius ;

	return area ;
}
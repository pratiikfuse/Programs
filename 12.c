//program which accepts number from user and vheck whether it contains 0 in it or not
//input : 2395
//output : there is no zero 
// input : 1018
// output : it contains Zero 
#include<stdio.h>
#include<stdbool.h>
bool chkzero(int); // function declaration
int main()
{
	int ivalue = 0 ;
	bool bret = 0 ;
	printf("Enter the number\n");
	scanf("%d",&ivalue);
	bret = chkzero(ivalue);

	if(bret==true)
	{
		printf("It contains Zero\n");
	}
	else
	{
		printf("There is no zero \n ");
	}

		return 0 ;
}
//function Defination
bool chkzero(int ino)
{
	int idigit = 0;
	//filter
	if(ino==0)
	{
		return true ;
	}
	//uodater
	if(ino<0)
	{
		ino = - ino ;
	}

	while(ino!=0)
	{
		idigit = ino%10;
		if(idigit==0)
		{
			return true ;
		}
		ino= ino/10 ;
	}
	return false ;
}

//program which accepts number from user and display its digits in reverse manner
// Input : 2395
//output : 5  9  3  2
#include<stdio.h>
void digits(int);
int main()
{
	int ivalue = 0 ;
	printf("Enter the number\n");
	scanf("%d",&ivalue);
	digits(ivalue);

	return 0 ;
}

void digits(int ino)
{
	int idigit = 0;
	while(ino!=0)
	{

	idigit= ino%10;
	printf("%d\n",idigit);
	ino = ino/10 ;
    }


}
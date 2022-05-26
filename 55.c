/*Accept number of rows and number of columns from user and display below
pattern
Input : iRow = 4 , iCol = 4
Ouput :

1	2	3	4	
1	*	*	4	
1	*	*	4	
1	2	3	4

*/
#include<stdio.h>
void Display(int iRow,int iCol)
{
	int i = 0;
	int j = 0;

	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
          if(i==iRow||i==1||j==1||j==iCol)
          {
          	printf("%d\t",j);
          }
          else
          {
          	printf("*\t");
          }
		}
		printf("\n");
	}

}
int main()
{
	int iValue1 = 0;
	int iValue2 = 0;

	printf("Enter number of rows\n");
	scanf("%d",&iValue1);

	printf("Enter number of columns\n");
	scanf("%d",&iValue2);

   Display(iValue1,iValue2);
	return 0;
}
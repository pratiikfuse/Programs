//Program Which Display Numbers From user and display its Non Factors
//input : 12
// output : 5  7  8   9  10  11
#include<stdio.h>
void nonfact(int);
int main()
{ 
    auto int ivalue = 0 ;
    printf("Enter the number \n");
    scanf("%d",&ivalue);
    nonfact(ivalue);
    return 0 ;
}
void nonfact(int ino)
{
    register int icnt = 0 ;
    for(icnt=1;icnt<ino;icnt++)
    {
        if(ino%icnt!=0)
        {
            printf("%d\t",icnt);
        }
    }
}
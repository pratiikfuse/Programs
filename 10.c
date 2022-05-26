//accept number from user and return difference between summation of all its factors and non factors
//input : 12
//output : -34 (16-50)
//input : 10
//output : -29 (8-3)

#include<stdio.h>
int factdiff(int);
int main()
{
    auto int ivalue = 0 ;
    auto int iret = 0 ;
    printf("Enter the number\n");
    scanf("%d",&ivalue);
    iret = factdiff(ivalue);
    printf("%d",iret);

    return 0 ;
}
int factdiff(int ino)
{
    auto int isumfact = 0;
    auto int isumnonfact = 0 ;
    auto int idiff = 0 ;
    register int icnt = 0 ;
    for(icnt=1;icnt<ino;icnt++)
    {
        if(ino%icnt==0)
        {
            isumfact= isumfact + icnt ;
        }
        else
        {
            isumnonfact = isumnonfact + icnt ;
        }
    }
    idiff = isumfact - isumnonfact ;
    return idiff ;
}
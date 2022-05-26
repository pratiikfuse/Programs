/*
Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)

Input : C
Output : Your exam at 9.20 

Input : d
Output : Your exam at 10.30 AM

*/
#include<stdio.h>
#include<stdbool.h>
void DisplayTime(char Division)
{
    if((Division=='A')||(Division=='a'))
    {
      printf("Your Exam is scheduled at 7 AM\n");
    }
    else if((Division=='B')||(Division=='b'))
    {
        printf("Your Exam is Scheduled at 8.30 AM\n");
    }
    else if((Division=='C')||(Division=='c'))
    {
      printf("Your Exam is scheduled at 9.20 AM\n");
    }
    else if((Division=='D')||(Division=='d'))
    {
        printf("Your Exam is Scheduled at 10.30 AM\n");
    }
    else
    {
        printf("Wrong Division\n");
    }

}
int main()
{
    char Div = '\0';
    printf("Enter Division\n");
    scanf("%c",&Div);
    DisplayTime(Div);
    return 0 ;
}
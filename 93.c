/*
Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
input : c 
output :  c  b  a
input : S
output : S T U V W X Y Z 
*/
#include<stdio.h>
void Display(char C)
{
    char i = '\0';
  if((C>='A')&&(C<='Z'))
  {
    for(i=C;i<='Z';i++)
    {
     printf("%c\t",i);
    }
    printf("\n");
  }
  else if((C>='a')&&(C<='z'))
  {
      for(i=C;i>='a';i--)
      {
        printf("%c\t",i);
      }
      printf("\n");
  }
  else
  {
    return ;
  }
}
int main()
{
    char ch ='\0';
    printf("Enter character\n");
    scanf("%c",&ch);
    Display(ch);
    return 0 ;
}
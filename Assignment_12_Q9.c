//9. Write a recursive function to print octal of a given decimal number
#include <stdio.h>

void conversionFunc(int);
int main()
{
  int deciNum;

  printf("Enter a Decimal number: ");
  scanf("%d", &deciNum);

  printf("Equivalent Octal Value: ");
  conversionFunc(deciNum);

  return 0;
}
void conversionFunc(int dec)
{
  if (dec > 0)
  {
    conversionFunc(dec / 8);
    printf("%d", dec % 8);
  }
}

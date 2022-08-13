//4. Write a recursive function to calculate sum of squares of first n natural numbers
#include <stdio.h>

int addNumbers(int n);

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", addNumbers(num));
  return 0;
}

int addNumbers(int n)
{
  if (n != 0)
    return n*n + addNumbers(n - 1);
  else
    return n;
}


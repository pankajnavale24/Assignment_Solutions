//4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
#include <stdio.h>
int main() {
  double arr[100];
  for (int i = 0; i < 10; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }
  for (int i = 1; i < 10; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %.2lf", arr[0]);

  return 0;
}

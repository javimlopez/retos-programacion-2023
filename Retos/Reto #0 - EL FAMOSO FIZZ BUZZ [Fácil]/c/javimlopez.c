#include <stdio.h>

void fizzbuzz(int n) {
  int i = 1;
  while (i <= n) {

    if (i % 3 == 0 && i % 5 == 0) {
      printf("fizzbuzz\n");
    } else if (i % 5 == 0) {
      printf("buzz\n");
    } else if (i % 3 == 0) {
      printf("fizz\n");
    } else
      printf("%d\n", i);
    i++;
  }
}

int main() {
  int n = 100;
  fizzbuzz(n);

  return 0;
}

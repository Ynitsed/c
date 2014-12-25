#include <stdio.h>
#include <string.h>

void my_print(int *a, int n) {
  printf("%d\n", *a);
  if (n == 1)
    return;
  my_print( a, n-1);
}

int main() {
  int a[20];
  for (int i = 0; i < 20;i++) {
    a[i] = i;
  }
  my_print(a, 20);
}

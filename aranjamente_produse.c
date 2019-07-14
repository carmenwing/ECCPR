#include <stdio.h>

int main() {
  int i, k, n, ok = 0;
  unsigned M;
  unsigned long long a;
  scanf("%d %d\n", &k, &M);
  n = k;
  do {
    a = 1;
    for (i = n - k + 1; i < n + 1; i++)
      a = a * i;
    n++;
    if (a <= M)
      ok = 1;

  } while (a <= M);

  if (ok == 0)
    printf("0");
  else
    printf("%d", n - 2);
}

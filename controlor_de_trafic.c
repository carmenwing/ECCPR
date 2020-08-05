#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 0, j, ok = 0;
  unsigned n, sum = 0, nr;
  scanf("%d", &n);
  unsigned v[n + 1];

  for (i = 0; i <= n + 1; i++) {
    v[i] = 0;
  }
  while (scanf("%d ", &nr) == 1) {
    v[nr] = 1;
  }
  for (i = 0; i < n + 1; i++) {
    if (v[i] == 0)
      sum = sum + i;
  }

  printf("%d", sum);
}

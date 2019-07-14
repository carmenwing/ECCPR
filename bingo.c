#include <stdio.h>

int main() {
  int n, k, nr, i, j, c = 0;
  scanf("%d%d", &n, &k);
  int v[n * n];
  for (i = 0; i < n * n; i++) {
    scanf("%d", &v[i]);
  }
  for (i = 0; i < k; i++) {
    scanf("%d", &nr);
    for (j = 0; j < n * n; j++) {
      if (nr == v[j])
        v[j] = -1;
    }
  }

  for (i = 0; i < n * n; i++) {
    if (v[i] != -1)
      c += 1;
  }

  if (c == 0)
    printf("BINGO!\n");
  else
    printf("%d\n", c);
}

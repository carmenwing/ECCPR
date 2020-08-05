#include <math.h>
#include <stdio.h>

int main() {
  int x, i, j, m, n, s = 0, count = 0;
  double suma = 0;
  int v[200];

  scanf("%d\n", &m);
  for (i = 0; i < m; i++)
    scanf("%d\n", &v[i]);

  scanf("%d\n", &n);
  for (i = m; i < m + n; i++)
    scanf("%d\n", &v[i]);
  n = n + m;
  for (i = 0; i < n; i++) {
    s = 0;
    for (j = 0; j < n; j++) {
      if ((v[j] <= v[i]) && (i != j)) {
        s++;
        if (s >= 5) {
          suma = suma + v[i];
          count = count + 1;
          break;
        }
      }
    }
  }

  printf("%.2f\n", suma / count);
}

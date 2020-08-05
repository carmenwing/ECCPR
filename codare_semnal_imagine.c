#include <stdio.h>
#include <stdlib.h>

int main() {
  int m, i, j, n, k, nr = 0, temp, dim_v1, dim_v2, nr_dif = 0, rez = 0;
  scanf("%d\n", &m);
  scanf("%d\n", &n);
  int a[m][n], v2[20];

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d ", &a[i][j]);
    }
  }
  dim_v1 = m * n;
  // dim lui v1 la fi mereu  = m*n
  // dim lui v2 va fi = nr de elemente diferite ale matricei A*2 (nr de aparitii
  // pt fiecare) aflu cate nr diferite sunt in MATRICE
  for (k = 0; k < 20; k++) {
    v2[k] = 0;
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
        if (a[i][j] == k)
          v2[k]++;
      }
    }
  }

  for (k = 0; k < 20; k++) {
    if (v2[k] != 0)
      nr_dif++;
  }
  dim_v2 = nr_dif * 2;
  rez = dim_v1 - dim_v2;
  printf("%d\n", rez);
}

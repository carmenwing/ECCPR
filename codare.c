#include <stdio.h>

int main() {
  int n, i, j, max = 0, sum = 0;
  int v[7];
  scanf("%d\n", &n);
  while (n--) {
    scanf("%d %d %d %d %d %d %d\n", &v[1], &v[0], &v[3], &v[2], &v[5], &v[4],
          &v[6]);
    sum = v[0];
    for (j = 1; j <= 6; j++) {
      v[j] = (v[j] % 2);
      sum = sum + v[j];
    }
    if (max <= sum) {
      max = sum;
    }
  }

  printf("%d\n", max);
}
// ATENTIE IN FOR-URI PANA LA CINE MERG!!!!! DACA E < SAU <= SI DACA MERG PANA
// LA VARIABILA CARE TREBUIE, NU PANA LA NR DE LINII SAU ALTCEVA!!

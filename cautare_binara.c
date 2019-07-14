#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, x, aux, j, st, dr, gasit = 0, mij;
  scanf("%d\n", &n);
  int v[100];
  for (i = 0; i < n; i++)
    scanf("%d\n", &v[i]);
  scanf("%d\n", &x);
  for (i = 0; i < n - 1; i++)
    for (j = i + 1; j < n; j++) {
      if (v[i] > v[j]) {
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }
    }

  st = 0;
  dr = n - 1;
  while (dr - st > 0) {

    mij = (int)((st + dr) / 2);

    if (v[mij] == x) {
      printf("%d \n", v[mij]);
      return 0;
    } else {
      printf("%d \n", v[mij]);
      if (v[mij] > x) {
        if ((dr - mij) % 2 == 0) {
          dr = mij;
        } else {
          dr = mij - 1;
        }
      }
      if (v[mij] < x) {
        if ((st - mij) % 2 == 0) {
          st = mij;
        } else {
          st = mij + 1;
        }
        if ((dr - st) % 2 == 1)
          dr = mij;
      }
    }
  }
  if (st == dr)
    printf("%d \n", v[st]);

  return 0;
}

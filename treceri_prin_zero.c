#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, l, schimbari = 0, nr_elem_fereastra = 0, n, w;
  float medie = 0, suma = 0, dif = 0, v[20];
  scanf("%d\n", &n);
  for (i = 0; i < n; i++)
    scanf("%f\n", &v[i]);
  scanf("%d\n", &w);

  for (i = 0; i < n; i++) {
    suma = 0;
    nr_elem_fereastra = 0;
    schimbari = 0;
    j = i + w - 1;
    if (i + w - 1 >= n)
      j = n - 1;
    for (l = i; l <= j; l++) {
      suma = suma + v[l];
      nr_elem_fereastra++;
    }
    medie = suma / nr_elem_fereastra;
    for (l = i; l <= j; l++) {
      v[l] = v[l] - medie;
    }
    for (l = i; l < j; l++) {
      if (((v[l] > 0) && v[l + 1] < 0) || ((v[l] < 0) && v[l + 1] > 0))
        schimbari++;
    }
    printf("%d\n", schimbari);
    i = j; // de ce asa merge, dar cu for( i = 0; i < n; i+w ) nu merge??
  }
}

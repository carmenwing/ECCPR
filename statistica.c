#include <math.h>
#include <stdio.h>

int main() {
  int m, n, nr, h[10], i, j, suma = 0, c = 0, dif = 0;
  double media = 0, d = 0;

  scanf("%d\n", &m);
  scanf("%d\n", &n);
  // initializez vectorul cu 0
  for (j = 0; j < 10; j++) {
    h[j] = 0;
  }
  // fac histograma
  for (i = 0; i < m * n; i++) {
    scanf("%d\n", &nr);
    h[nr] = h[nr] + 1;
  }
  // suma
  for (j = 0; j < 10; j++) {
    suma = suma + h[j];
  }

  media = (double)suma / 10;
  suma = 0;
  for (j = 0; j < 10; j++) {
    dif = 0;
    dif = h[j] - media;
    suma = suma + pow(dif, 2);
  }

  d = sqrt(suma / 10);

  for (j = 0; j < 10; j++) {
    if (h[j] > d) // daca las h[j]>=d ca in cerinta, nu merge...
      c++;
  }

  printf("%d\n", c);
}

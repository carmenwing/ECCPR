#include <stdio.h>

int main() {
  int i = 0, n, index, lung, lung_max = 0, ind;
  float x, suma, suma_max = 0;
  scanf("%d\n", &n);
  while (i < n) {
    index = i;
    suma = 0;
    lung = 0;
    while (i < n) {
      scanf("%f ", &x);
      i++;
      if (x > 0) {
        suma += x;
        lung += 1;

      } else {
        break;
      }
    }

    if ((lung > lung_max) || ((lung == lung_max) && (suma > suma_max))) {
      ind = index; // tb actualizat si index, altfel o sa am suma max si lung
                   // max, DAR MEREU AFISEAZA ULTIMUL INDEX!!
      suma_max = suma;
      lung_max = lung;
    }
  }

  if (lung_max == 0) {
    printf("-1 0");
  } else {

    printf("%d %d\n", ind, lung_max);
  }
}

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, x, dimensiune = 0, max = 0, rest = 0;

  struct tip {
    int nr;
    int zerouri;
  };

  struct tip nr[20];

  scanf("%d\n", &n);

  for (i = 0; i < n; i++) {
    nr[i].zerouri = 0;
    dimensiune = 0;
    scanf("%d\n", &nr[i].nr);
    x = nr[i].nr;
    if (x == 0)
      nr[i].zerouri = 8;
    else {
      while (x > 0) {

        rest = x % 2;
        x = x / 2;
        dimensiune += 1;
        if (rest == 0)
          nr[i].zerouri += 1;
      }
      nr[i].zerouri = nr[i].zerouri + (8 - dimensiune);
    }
  }
  max = nr[0].zerouri;
  for (i = 1; i < n; i++) {
    if (nr[i].zerouri > max) {
      max = nr[i].zerouri;
    }
  }
  for (i = 0; i < n; i++) {
    if (nr[i].zerouri == max) {
      printf("%d\n", nr[i].nr);
    }
  }
}

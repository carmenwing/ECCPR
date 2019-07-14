#include <math.h>
#include <stdio.h>
int main() {
  int n, i, j;
  float a, b, c, p, aria = 1, raport, perim, max = -1;
  scanf("%d\n", &n);

  for (i = 0; i < n; i++) {
    scanf("%f %f %f\n", &a, &b, &c);
    if ((a < b + c) && (b < a + c) && (c < a + b)) {
      if ((a != b) && (b != c) && (a != c)) {
        perim = a + b + c;
        p = perim / 2;
        aria = sqrt(p * (p - a) * (p - b) * (p - c));
        raport = aria / perim;
        if (raport >= max) {
          max = raport;
          j = i;
        }
      }
    }
  }
  printf("%d %.3f\n", j, max);
}

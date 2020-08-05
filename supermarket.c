#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int b, n, i, j;
  float suma = 0, reducere = 0;
  scanf("%d %d\n", &b, &n);
  unsigned produs;
  struct tip {
    unsigned cod;
    char p_c;
    float valoare;
  };
  struct tip baza[b];
  for (i = 0; i < b; i++) {
    scanf("%x %c %f\n", &baza[i].cod, &baza[i].p_c, &baza[i].valoare);
  }

  while (n--) {
    scanf("%x", &produs);
    for (i = 0; i < b; i++) {
      if (produs == baza[i].cod) {
        if (baza[i].p_c == 'p') {
          suma = suma + baza[i].valoare;
        } else if (baza[i].p_c == 'c') {
          reducere = reducere + baza[i].valoare;
        }
        break;
      }
    }
  }

  printf("%.2f", (suma - (reducere * suma / 100)));
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// DE INTREBAT PE VLAD
int main() {
  int n, i, j, zi_in, luna_in, zi_sf, luna_sf, index, min_initializat = 0, z;
  float pb = 0, cm = 0, min, pret = 0;
  scanf("%d %f %f\n", &n, &pb, &cm);
  scanf("%d %d %d %d\n", &zi_in, &luna_in, &zi_sf, &luna_sf);
  struct tip {
    char oras[20];
    int zi, luna, pret_bilet, distanta;
  };
  struct tip concert[n];
  z = n;

  for (i = 0; i < n; i++) {
    scanf("%s %d %d %d %d\n", concert[i].oras, &concert[i].zi, &concert[i].luna,
          &concert[i].pret_bilet, &concert[i].distanta);
  }
  while (z--) {

    if (min_initializat == 0) {
      for (i = 0; i < n; i++) {
        if ((concert[i].luna < luna_in) || (concert[i].luna > luna_sf) ||
            ((concert[i].luna == luna_in) &&
             ((concert[i].zi < zi_in) || (concert[i].zi > zi_sf)))) {
          min = 2 * concert[i].distanta * pb * cm / 3 + concert[i].pret_bilet;
          index = i;
          min_initializat = 1;
          break;
        }
      }
    } else {
      for (i = 0; i < n; i++) {
        if ((concert[i].luna < luna_in) || (concert[i].luna > luna_sf) ||
            ((concert[i].luna == luna_in) &&
             ((concert[i].zi < zi_in) || (concert[i].zi > zi_sf)))) {
          pret = 2 * concert[i].distanta * pb * cm / 3 + concert[i].pret_bilet;
          ;
          if (pret < min) {
            min = pret;
            index = i;
          }
        }
      }
    }
  }

  printf("%s %.2f\n", concert[index].oras, min);
}

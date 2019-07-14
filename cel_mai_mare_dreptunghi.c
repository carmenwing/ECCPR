#include <stdio.h>

int main() {
  int n, i, j = 1, max = 1;
  scanf("%d\n", &n);
  int arie[n];

  struct caracteristici {
    char nume[20];
    int x1;
    int y1;
    int x2;
    int y2;
  };

  struct caracteristici forma[n];
  for (i = 0; i < n; i++) {
    arie[i] = 1;
    scanf("%s %d %d %d %d\n", forma[i].nume, &forma[i].x1, &forma[i].y1,
          &forma[i].x2, &forma[i].y2);
    arie[i] = (forma[i].x2 - forma[i].x1) * (forma[i].y2 - forma[i].y1);
  }
  max = arie[0];
  for (i = 0; i < n; i++) {
    if (arie[i] >= max) {
      max = arie[i];
      j = i;
    }
  }

  printf("%s %d %d %d %d %d\n", forma[j].nume, forma[j].x1, forma[j].y1,
         forma[j].x2, forma[j].y2, arie[j]);
  // daca las if(arie>max), in cazul in care max e chiar arie[0], nu va intra
  // niciodata in bucla if, deci nu se va face
  // i=j si nu returneaza nimic.
}

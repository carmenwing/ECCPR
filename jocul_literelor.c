#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char alfa, beta, nume[4001];
  int m, n, mic = 0, mijloc = 0, mare = 0, l = 0;

  scanf("%c %c %d %d\n", &alfa, &beta, &m, &n);
  alfa = toupper(alfa);
  beta = toupper(beta);
  while (!feof(stdin)) {
    scanf("%s\n", nume);
    l = strlen(nume);
    if (toupper((nume[0]) == alfa) && (toupper(nume[l - 1]) == beta)) {
      if (l < m)
        mic++;
      if ((l >= m) && (l < n))
        mijloc++;
      if (l >= n)
        mare++;
    }
  }
  printf("%d %d %d\n", mic, mijloc, mare);
}

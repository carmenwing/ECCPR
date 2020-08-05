#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned short int k, n;
  unsigned int v[65535];
  int i, j;

  scanf("%hu %hu\n", &k, &n);
  for (i = 0; i < n; i++) {
    scanf("%u ", &v[i]);
  }
  for (i = 0; i < k; i++) {
    for (j = 0; j * k + i < n; j++) {
      printf("%u ", v[j * k + i]);
    }
  }
}

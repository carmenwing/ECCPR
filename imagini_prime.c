#include <stdio.h>

int main()

{
  int a, b, i, x, k, s = 0;
  scanf("%d\n", &a);
  scanf("%d\n", &b);

  for (i = 0; i < a * b; i++) {
    scanf("%d\n", &x);
    if ((x == 0) || (x == 1))
      s++;
    else if (x != 2) {
      for (k = 2; k < x; k++)
        if (x % k == 0) {
          s++;
          break;
        }
    }
  }

  printf("%d\n", s);
}

#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, v[7], n;
  int seg[10][7] = {{1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0},
                    {1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1},
                    {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1},
                    {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0},
                    {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1}};

  while (!feof(stdin)) {
    scanf("%d,%d,%d,%d,%d,%d,%d,%d\n", &v[0], &v[1], &v[2], &v[3], &v[4], &v[5],
          &v[6], &v[7]);
    for (i = 0; i < 10; i++) {
      if ((seg[i][0] == v[0]) && (seg[i][1] == v[1]) && (seg[i][2] == v[2]) &&
          (seg[i][3] == v[3]) && (seg[i][4] == v[4]) && (seg[i][5] == v[5]) &&
          (seg[i][6] == v[6])) {
        switch (i) {
        case '0': {
          if (v[7] == 0)
            printf("0");
          else
            printf("0.");
          break;
        }
        case '1': {
          if (v[7] == 0)
            printf("1");
          else
            printf("1.");
          break;
        }
        case '2': {
          if (v[7] == 0)
            printf("2");
          else
            printf("2.");
          break;
        }
        case '3': {
          if (v[7] == 0)
            printf("3");
          else
            printf("3.");
          break;
        }
        case '4': {
          if (v[7] == 0)
            printf("4");
          else
            printf("4.");
          break;
        }
        case '5': {
          if (v[7] == 0)
            printf("5");
          else
            printf("5.");
          break;
        }
        case '6': {
          if (v[7] == 0)
            printf("6");
          else
            printf("6.");
          break;
        }
        case '7': {
          if (v[7] == 0)
            printf("7");
          else
            printf("7.");
          break;
        }
        case '8': {
          if (v[7] == 0)
            printf("8");
          else
            printf("8.");
          break;
        }
        case '9': {
          if (v[7] == 0)
            printf("9");
          else
            printf("9.");
          break;
        }
        }
      }
    }
  }
}

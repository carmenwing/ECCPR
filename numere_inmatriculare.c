#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char s1[4], s2[4], s3[4];
  int i, j, ok = 0, c = 0;
  char jud[42][3] = {{"AB"}, {"AR"}, {"AG"}, {"B"},  {"BC"}, {"BH"}, {"BN"},
                     {"BT"}, {"BV"}, {"BR"}, {"BZ"}, {"CS"}, {"CL"}, {"CJ"},
                     {"CT"}, {"CV"}, {"DB"}, {"DJ"}, {"GL"}, {"GR"}, {"GJ"},
                     {"HR"}, {"HD"}, {"IL"}, {"IS"}, {"IF"}, {"MM"}, {"MH"},
                     {"MS"}, {"NT"}, {"OT"}, {"PH"}, {"SM"}, {"SJ"}, {"SB"},
                     {"SV"}, {"TR"}, {"TM"}, {"TL"}, {"VS"}, {"VL"}, {"VN"}};

  while (!feof(stdin)) {
    ok = 0;
    scanf("%s %s %s\n", s1, s2, s3);
    // VERIFIC JUDET
    for (i = 0; i < 42; i++) {
      if (strcmp(s1, jud[i]) == 0) {
        ok = 1;
        break;
      }
    }
    // VERIFIC CIFRELE
    if ((strlen(s2) < 2) || (strlen(s2) > 3))
      ok = 0;
    !!!!!!!sau, nu SI !!!if (ok) {
      for (i = 0; i < strlen(s2); i++) {
        if (isdigit(s2[i]) == 0) {
          ok = 0;
          break;
        }
      }
    }

    // VERIFIC LITERELE
    if (strlen(s3) != 3)
      ok = 0;
    if (ok) {
      for (i = 0; i < 3; i++) {
        if (isupper(s3[i]) == 0) {
          ok = 0;
          break;
        }
      }
    }

    if (ok)
      printf("%s %s %s\n", s1, s2, s3);
  }
}

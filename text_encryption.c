#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char text[256];
  int n, i, index = 0, v[10]; // v este un vector cu chei!!int!!!
  fgets(text, sizeof(text), stdin);
  if (text[strlen(text) - 1] = '\n') {
    text[strlen(text) - 1] = '\0';
  }
  scanf("%d\n", &n);

  for (i = 0; i < n; i++) {
    scanf("%d\n", &v[i]);
  }

  for (i = 0; i < strlen(text); i++) {
    if ((text[i] >= 'a') && (text[i] <= 'z')) {
      text[i] = text[i] + v[index];
      index++;
      index = index % n;        /// daca index depaseste dimensiunea vectorului
      if (text[i] > 'z')        /// o ia de la capat
        text[i] = text[i] - 26; /// daca se depaseste zona alfabetului in ascii
    }                           /// o ia de la capat
    if ((text[i] >= 'A') && (text[i] <= 'Z')) {
      text[i] = text[i] + v[index];
      index++;
      index = index % n;
      if (text[i] > 'Z')
        text[i] = text[i] - 26;
    }
  }
  puts(text);
}

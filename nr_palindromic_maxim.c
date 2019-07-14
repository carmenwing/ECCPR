#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, j, impar = 0, nr_cifre = 0, nr_impar_ori = 0, cifra_mijloc;
  scanf("%d\n", &n);
  int v[n], a[10];
  for (i = 0; i < n; i++) // citesc numerele
    scanf("%d ", &v[i]);

  for (i = 1; i < 10;
       i++) // in vectorul a pun pt fiecare nr (indice) de cate ori apare
  {
    a[i] = 0;
    for (j = 0; j < n; j++) {
      if (v[j] == i)
        a[i]++;
    }
  }

  nr_cifre = n;

  if ((nr_cifre % 2) != 0) // daca am nr impar de cifre
  {
    for (i = 1; i < 10; i++) // am voie sa am O SINGURA CIFRA de nr impar de ori
    {
      if (a[i] % 2 != 0) {
        nr_impar_ori++;
        cifra_mijloc = i;
      }
    }
    if (nr_impar_ori != 1) // daca nu am niciuna/am mai multe de nr impar ori,
                           // nu se poate face palindrom
    {
      printf("0");
      exit(0);
    } else if (nr_impar_ori == 1) // dar daca am una singura, se poate
    {
      for (i = 9; i > 0;
           i--) // afisez descrescator fiecare cifra de nr_aparitii/2
      {
        if (a[i] != 0)
          for (j = 0; j < a[i] / 2; j++)
            printf("%d", i);
      }
      printf("%d", cifra_mijloc); // afisez cifra din mijloc
      for (i = 1; i < 10;
           i++) // afisez crescator fiecare cifra de nr_aparitii/2
      {

        if (a[i] != 0)
          for (j = 0; j < a[i] / 2; j++)
            printf("%d", i);
      }
    }
  }
  if ((nr_cifre % 2) == 0) // daca am nr par de cifre
  {
    for (i = 1; i < 10; i++) // nu am voie sa am niciuna de nr impar de ori
    {
      if (a[i] % 2 != 0) {
        printf("0");
        exit(0);
      }
    }
    for (i = 9; i > 0; i--) {
      if (a[i] != 0)
        for (j = 0; j < a[i] / 2; j++)
          printf("%d", i);
    }
    for (i = 1; i < 10; i++) {
      if (a[i] != 0)
        for (j = 0; j < a[i] / 2; j++)
          printf("%d", i);
    }
  }
}

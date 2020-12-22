#include <stdio.h>
 int main()
{
  int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
   printf("Introduceți numărul de rânduri și coloane din prima matrice\n");
  scanf("%d%d", &m, &n);
  printf("Introduceți elemente ale primei matrice\n");
   for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
   printf("Introduceți numărul de rânduri și coloane din a doua matrice\n");
  scanf("%d%d", &p, &q);
if (n != p)
    printf("Înmulțirea nu este posibilă.\n");
  else
  {    printf("Introduceți elemente din a doua matrice\n");
     for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
     for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
         multiply[c][d] = sum;
        sum = 0;
      }
    }
     printf("Produsul matricilor:\n");
     for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
       printf("\n");
    }
  }
   return 0;
}

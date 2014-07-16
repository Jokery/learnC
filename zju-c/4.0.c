#include <stdio.h>
int main()
{
  int number;
  scanf("%d", &number);
  int count = 0;
  for (int i = number; i <= number + 3; i++) {
    for (int j = number; j <= number + 3; j++) {
      for (int k = number; k <= number + 3; k++) {
        if (i == j || i == k || j == k) {
          continue;
        }
        count++;
        if (count % 6 == 0) {
          printf("%d%d%d\n", i, j, k);
        } else {
          printf("%d%d%d ", i, j, k);
        }
      }
    }
  }
}

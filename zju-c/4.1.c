#include <stdio.h>
int main()
{
  int n, min, max;
  scanf("%d", &n);
  min = 1;
  for (int i = 0; i < n - 1; i++) {
    min *= 10;
  }
  max = min * 10 -1;
  for (int i = min; i <= max; i++) {
    int temp = i;
    int sum = 0;
    for (int j = 0; j < n; j++) {
      int digital = temp % 10;
      int addition = 1;
      for (int k = 0; k < n; k++){
        addition *= digital;
      }
      sum += addition;
      temp /= 10;
    }
    if (i == sum) {
      printf("%d\n", i);
    }
  }
}

#include <stdio.h>
int main()
{
  int input, ten, one;
  scanf("%d", &input);
  one = input % 16;
  ten = input / 16;
  printf("%d\n", ten * 10 + one);
  return 0;
}

#include <stdio.h>
int main()
{
  int input, output, hundred, ten, one;
  scanf("%d", &input);
  one = input % 10;
  input /= 10;
  ten = input % 10;
  input /= 10;
  hundred = input;
  printf("%d\n", one * 100 + ten * 10 + hundred);
}

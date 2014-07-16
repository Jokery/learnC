#include <stdio.h>
int main(){
  int centimeter, foot, inch;
  double inch_double;
  scanf("%d", &centimeter);
  inch_double = centimeter / 100.0 / 0.3048 * 12;
  foot = (int)inch_double / 12;
  inch = (int)inch_double % 12;
  printf("%d %d\n", foot, inch);
  return 0;
}

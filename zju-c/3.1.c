#include <stdio.h>
int main()
{
  int day;
  scanf("%d", &day);
  if ((day-1) % 5 + 1 > 3) {
    printf("Drying in day %d\n", day);
  } else {
    printf("Fishing in day %d\n", day);
  }
  return 0;
}

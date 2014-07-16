#include <stdio.h>
int main()
{
  int hour, minute;
  scanf("%d:%d", &hour, &minute);
  if (hour >= 12) {
    if (hour > 12) {
      hour -= 12;
    }
    printf("%d:%d PM\n", hour, minute);
  } else {
    printf("%d:%d AM\n", hour, minute);
  }
}

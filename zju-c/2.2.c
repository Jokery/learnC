#include <stdio.h>
int main(){
  int start, passby, hour, minute, end;
  scanf("%d %d", &start, &passby);
  hour = start / 100;
  minute = start % 100;
  end = hour * 60 + minute + passby;
  printf("%d\n", end / 60 * 100 + end % 60);
  return 0;
}

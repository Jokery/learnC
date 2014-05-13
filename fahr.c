#include <stdio.h>
#define UPPER 300
#define STEP 20
#define LOWER 0

int main()
{
  int fahr;
  for(fahr = UPPER; fahr >= LOWER; fahr -= STEP)
  {
    printf("%3d %6.1f\n", fahr, (fahr - 32.0) * 5 / 9);
  }
}

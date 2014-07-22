#include <stdio.h>
int isPrime(int number);

int main()
{
  int a, b;
  int count = 0, sum = 0;
  scanf("%d %d", &a, &b);
  for ( int i = a; i <= b; i ++ ) {
    if ( isPrime(i) ) {
      sum += i;
      count ++;
    }
  }
  printf("%d %d\n", count, sum);
  return 0;
}

int isPrime(int number) {
  if (number == 1) {
    return 0;
  }
  for (int i = 2; i < number; i++ ) {
    if ( number % i == 0 ) {
      return 0;
    }
  }
  return 1;
}

#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

int main(){
  unsigned x = 152;
  printf("%d\n", getbits(x, 4, 3));
}

unsigned getbits(unsigned x, int p, int n){
  return (x >> (p + 1 - n)) & ~(~0 << n);
}

#include <stdio.h>
#include <string.h>

int main(){
  char s[13] = "hello,";
  char t[] = "world!";
  strcat(s, t);
  printf("%s\n", s);
  return 0;
}

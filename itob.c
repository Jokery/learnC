#include <stdio.h>
#include <string.h>

void itob(int n, char s[], int b);
void reverse(char s[]);

int main() {
  int i = -196;
  char s[9];
  itob(i, s, 7);
  printf("%s\n", s);
  return 0;
}

void itob(int n, char s[], int b) {
  int i, sign;
  if ((sign = n) < 0) { n = -n; }
  i = 0;
  do {
    s[i++] = n % b + '0';
  } while ( (n /= b) > 0 );
  if (sign < 0) s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

void reverse(char s[]) {
  int i, length;
  length = strlen(s);
  char t[length + 1];
  for (i = length - 1;i >= 0; i--) {
    t[length - i - 1] = s[i];
  }
  for (i = 0; i < length; i++) {
    s[i] = t[i];
  }
  s[i+1]='\0';
}

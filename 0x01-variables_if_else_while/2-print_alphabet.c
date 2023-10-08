#include <stdio.h>

int main() {
  char c = 'a';
  int i = 0;
  while (i < 26) {
    putchar(c);
    putchar('\n');
    c++;
    i++;
  }
  return 0;
}

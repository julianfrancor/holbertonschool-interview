#include <stdlib.h>
#include <stdio.h>

int main()
{
  unsigned long n = 121;
  const int value = snprintf(NULL, 0, "%lu", n);
  char buf[value + 1];
  int c = snprintf(buf, value + 1, "%lu", n);

  printf("%d", c);
  printf("%s", buf);

  return (0);
}

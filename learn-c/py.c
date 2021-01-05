// gcc -fPIC py.c -o py -shared  -I/usr/include/python3.8
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include <Python.h>

int fab(int n)
{
  if (n == 1 || n == 0) return 1;
  return n * fab(n - 1);
}

char *reverse(char *s)
{
  register char t, *p = s, *q = (s + strlen(s) - 1);
  while (s && (p < q)) { t = *p; *p++ = *q; *q-- = t; }
  return(s);
}

int main()
{
  printf("hello, py!\r\n");

  printf("bye,py.");
  return 0;
}

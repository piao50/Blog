// gcc data.cpp -o data
#include "data.h"
#include <stdio.h>
#include <iostream>
#include <verctor>
#include <algorithm>
#include <functional>

Hello::Hello()
{
  printf("Hello\r\n");
}

Hello::~Hello()
{
  printf("Bye\r\n");
}

void Hello::hello()
{
  printf("hello from Hello\r\n");
}

int main(int argc, char** argv)
{
  printf("hello, gushi!\r\n");

  Hello h;
  h.hello();

  Hello *h1 = new Hello();
  h1->hello();
  delete h1;
  h1 = NULL;

  
  for(int i = 0; i < 5; i++) printf(" line: %d\r\n", i);

  
  
  printf("bye, gushi!\r\n");
  return 0;
}

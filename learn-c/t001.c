#include <stdio.h>
#include <unistd.h>

void hello(){ printf("hello, gushi ...\n"); }

void bye() { printf("bye, gushi!\n"); }

int main(int argc, char* argv[]){
  hello();
  if (argc == 1){
    printf( " No arguments given on command line.\n\n" );
    printf( " usage: %s <argument1> <argument2> ... <argumentN>\n", argv[0] );
    return 0;
  }

  printf( "argument count = [%d]\n", argc);
  for( int i = 0; i < argc; i++ ) {
    if( i == 0)
      printf( "executable = [%s]\n", argv[i]);
    else
      printf( "argument %d = [%s]\n", i, argv[i]);
  }

  fprintf(stderr, "Oops! Something went wrong ...\n");
  bye(); sleep(1); bye();
}

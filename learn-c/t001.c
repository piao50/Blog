#include <stdio.h>

int main(int argc, char* argv[]){
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
}

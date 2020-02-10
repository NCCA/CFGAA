#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int index=0;
  // allocate some memory
  char *alphabet = calloc(26,sizeof(char));

  for( char c='a'; c<='z'; ++c)
  {
    alphabet[index++]=c;
  }

  char *new = malloc(26*2);
  memcpy(new,alphabet,26);
  memcpy(&new[26],alphabet,12);
    
  for( int i=0; i<26*2; ++i)
  {
    printf("%c ",new[i]);
  }


    return EXIT_SUCCESS;
}

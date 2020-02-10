#include <stdio.h>
#include <stdlib.h>

int main()
{
	int index=0;
	// allocate some memory
	char *alphabet = calloc(26,sizeof(char));
	char *more=calloc(26,sizeof(float));
	printf("\nalphabet %p \n",alphabet);
	printf("\nmore %p \n",more);

	for( char c='a'; c<='z'; ++c)
	{
		alphabet[index++]=c;
	}

	for(int i=0; i<26; ++i)
	{
		printf("%c ",alphabet[i]);
	}
	printf("\nrealloc %p \n",alphabet);
	alphabet=realloc(alphabet,26*2);
	printf("\nrealloc %p \n",alphabet);

	for( char c='A'; c<='Z'; ++c)
	{
		alphabet[index++]=c;
	}

	for(int i=0; i<26*2; ++i)
	{
		printf("%c ",alphabet[i]);
	}
	printf("\n");
  free(alphabet);
	return EXIT_SUCCESS;
}

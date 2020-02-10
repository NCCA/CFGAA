#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
  unsigned int *mem;
  unsigned int size;
  printf("enter array size >");
  scanf("%d",&size);
  
  mem=(unsigned int *)calloc(size,sizeof(unsigned int));
  for(unsigned int i=0; i<size; ++i)
    mem[i]=i;
  
  for(unsigned int i=0; i<size; ++i)
    printf("%d \n",mem[i]);
    
  free(mem); 
 return EXIT_SUCCESS;
}
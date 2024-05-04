#include <stdio.h>
#include <malloc.h>

void allocateMemory( int ** ptr) {
   *ptr = (int *) malloc(sizeof(int)); // allocate some memory
   printf("ptr address func - %p\n", (void*)&ptr);
}

int main(){
   int *ptr = NULL;

   allocateMemory(&ptr);
   *ptr = 20;

   printf("%d\n", *ptr);
   printf("ptr address main - %p\n", (void*)&ptr);

   // free up the memory
   free(ptr);
   return 0;
}
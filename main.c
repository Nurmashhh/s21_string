#include <stdio.h>
#include <string.h>

#include "s21_string.h"

int main() {
  char lotr[] = "_-=Властелин к0лец=-_";          
  char * ring = strchr(lotr, '0');          
  char * ring2 = strchr(lotr, '0');                  
  
  printf("%s\n", ring);
  printf("%s\n", ring2);
  
  return 0;
}
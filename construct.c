#include <stdio.h>
#include <stdlib.h>

struct foo{
  char * name;
  int x;
};

int main(){
  struct foo first;
  first.name = "hello";
  first.x = 5;
  printf("%s %d\n", first.name,first.x);

}

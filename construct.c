#include <stdio.h>
#include <stdlib.h>

struct foo{
  char * acc;
  int bal;
};

int main(){
  struct foo first;
  first.acc = "hello";
  first.bal = 5;
  printf("%s %d\n", first.acc,first.bal);
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct account{
  char *name[10];
  int bal;
};

struct account makeacc(){
  srand(time(NULL));
  struct account a;
  int i;
  for(i = 0; i < 9; i++){
    a.name[i] =  rand() %26+65;
  }
  a.name[9] = 0;
  a.bal = rand() + 1000;
  return a;
}

int myacc(struct account a){
  printf("Name:%s \n Account balance:$%d \n", a.name,a.bal);
  return 0;
}

int changebal(struct account *accp, char newname[10], int newbal){
  int i;
  for(i = 0; i < 9;i++){
    accp->name[i] = newname[i];
  }
  accp->bal = newbal;
  return 0;
}

int main(){
  struct account first;
  first = makeacc();
  printf("Initial account\n");
  myacc(first);
  printf("Changing an account \n");
  changebal(&first,"Hacker", 999999);
  myacc(first);
  return 0;
}

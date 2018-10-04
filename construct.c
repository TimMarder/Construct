// Tim Marder & Dahong Jiang
// Systems pd04
// Work #06 -- Con-STRUCT-ion
// 2018-10-03

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <strings.h>

struct bank { //declares the bank struct prototype
  char *name;
  int bal;
};

struct bank makeacc(){
  struct bank acc;

  int num = rand() % 10; //10 different possibilities of user name and balance
	if (num == 0){
		struct bank acc = {"John", 500};
	}
	else if (num == 1){
		struct bank acc = {"Steven", 1200};
	}
	else if(num == 2){
		struct bank acc = {"Larry", 180};
	}
	else if(num == 3){
		struct bank acc = {"Tim", 290};
	}
	else if(num == 4){
		struct bank acc = {"Robert", 850};
	}
    else if (num == 5){
		struct bank acc = {"Ariel", 340};
	}
	else if (num == 6){
		struct bank acc = {"Howard", 1760};
	}
	else if(num == 7){
		struct bank acc = {"Gary", 1100};
	}
	else if(num == 8){
		struct bank acc = {"Ryan", 480};
	}
	else {
		struct bank acc = {"Dahong", 910};
	}
	return acc;
}

void myacc(struct bank acc){ //prints the name and balance of account
  printf("Name: %s \nAccount balance: $%d \n", acc.name,acc.bal);
}

void modify(struct bank *acc, char *newname, int newbal){
    acc->name = newname; //sets name of accout to newname
    acc->bal = newbal;   //sets balance of account to newbal
}

int main(){
    srand(time(NULL));

	printf("Generating first bank account...\n");
	struct bank first = makeacc();
	myacc(first);
    printf("\n");
	printf("Generating second bank account...\n");
	struct bank second = makeacc();
	myacc(second);
    printf("\n");
	printf("Generating third bank account...\n");
	struct bank third = makeacc();
	myacc(third);
    printf("\n");
	printf("Changing name and balance of third bank account...\n");
	modify(&third, "Harry", 800);
	myacc(third);
    printf("\n");

	return 0;

}

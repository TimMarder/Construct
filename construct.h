struct account{
  char name[10];
  int bal;
};

struct account makeacc();

int myacc(struct account a);

int changebal(struct account *accp, char[10] newname, int newbal);

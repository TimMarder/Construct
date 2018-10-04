struct bank {
  char *name;
  int bal;
};

struct bank makeacc();

int myacc(struct bank acc);

int changebal(struct bank *accp, char *newname, int newbal);

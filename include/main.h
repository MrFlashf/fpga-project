struct Tuple {
  int *numbers;
  int howManyLines;
};

void print_calc(void);
struct Tuple getNumbersFromFile(char *fileName);
int count(struct Tuple tuple, int operation);

int add(struct Tuple tuple);
int multiply(struct Tuple tuple);

struct Tuple {
  int *numbers;
  int howManyLines;
};

struct Tuple getNumbersFromFile(char *fileName);
int count(struct Tuple tuple, int operation);

int add(struct Tuple tuple);
int substract(struct Tuple tuple);
int multiply(struct Tuple tuple);
int divide(struct Tuple tuple);


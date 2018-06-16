#include <stdio.h>
#include <main.h>
#include <stdlib.h>

int count(struct Tuple tuple, int operation) {
  int result;
  switch(operation) {
    case 1:
      result = multiply(tuple);
      break;
    case 2:
      result = divide(tuple);
      break;
    case 3:
      result = substract(tuple);
      break;
    default:
      result = add(tuple);
  }
  return result;
}

int multiply(struct Tuple tuple) {
  int result = 1;
  for (int i = 0; i < tuple.howManyLines; i++)
    result *= tuple.numbers[i];
  
  return result;
}

int add(struct Tuple tuple) {
  int result = 0;
  for (int i = 0; i < tuple.howManyLines; i++)
    result += tuple.numbers[i];
  return 0;
}

int divide(struct Tuple tuple) {
  int result = 1;
  for (int i = 0; i < tuple.howManyLines; i++)
    if (tuple.numbers[i] == 0) {
      exit(EXIT_FAILURE);
    }
    else {
      result /= tuple.numbers[i];      
    }
  return 0;
}

int substract(struct Tuple tuple) {
  int result = 0;
  for (int i = 0; i < tuple.howManyLines; i++)
    result -= tuple.numbers[i];
  return 0;
}
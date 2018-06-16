#include <stdio.h>
#include <main.h>

void print_calc(void) {

  printf("Hello world!\n");

  return;
}

int count(struct Tuple tuple, int operation) {
  int result;
  switch(operation) {
    case 1:
      result = multiply(tuple);
    default:
      result = add(tuple);
  }

  return result;
}

int multiply(struct Tuple tuple) {
  return 0;
}

int add(struct Tuple tuple) {
  return 0;
}
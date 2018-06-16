#include <stdio.h>
#include <stdlib.h>
#include <main.h>

struct Tuple getNumbersFromFile(char *fileName) {
  FILE *fp;
  char *line = NULL;
  char buff[255];
  size_t len = 0;
  int array[999];
  int lineNumber = 0;


  fp = fopen(fileName, "r");

  while((getline(&line, &len, fp)) != -1) {
    int currentNumber = atoi(line);
    array[lineNumber] = currentNumber;
    lineNumber += 1;
  }

  for (int i=0; i < lineNumber; i++) {
    printf("Line: %d\n", array[i]);
  }

  fclose(fp);
  struct Tuple ret = { array, lineNumber };
  return ret;
  
  // return(0);
}
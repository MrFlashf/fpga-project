#include <main.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// 1. getoptem wziąć jakie działanie matematyczne
// 2. getoptem wziąć nazwe pliku
// 3. sparsować plik do arraya
// 4. wykonać działanie
// 5. wyswietlic wynik

int main(int argc, char *argv[]) {
  int result, operationInt;
  char opt;
  char* operation = NULL;
  char* fileName = "";


  while((opt = getopt(argc, argv, "o:f:")) != -1) {
    switch(opt) {
      case 'o':
        operation = optarg;
        operationInt = atoi(operation);
        break;
      case 'f':
        fileName = optarg;
        break;
      default: 
        exit(EXIT_FAILURE);
    }
  }

  if (fileName == "") {
    printf("File name not specified, exiting\n");
    exit(EXIT_FAILURE);
  }
  if (operationInt == 0) {
    printf("Operation not specified, assuming multiply\n");
    operationInt = 1;
  }

  struct Tuple t = getNumbersFromFile(fileName);

  result = count(t, operationInt);
  printf("Zapisuje wynik w pliku wynik.txt\n");

  char command[999];
  sprintf(command, "echo \"Wynik = %d\" >> ../wynik.txt", result);

  printf("%s\n", command);

  system(command);

  exit(EXIT_SUCCESS);
}
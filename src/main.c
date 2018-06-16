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
  int result;
  char opt;
  char* type;
  char* fileName;


  while((opt = getopt(argc, argv, "t:f:")) != -1) {
    switch(opt) {
      case 't':
        type = optarg;
        printf("Type = %s\n", type);
        break;
      case 'f':
        fileName = optarg;
        printf("Filename: %s\n", fileName);
        break;
      default: 
        exit(1);
    }
  }

  // zamiast hello.txt daj tutaj nazwe pliku z getopt
  struct Tuple t = getNumbersFromFile("hello.txt");

  // zamiast 1 daj tutaj z getopta cyfrę odpowiadającą za rodzaj operacji, np. 1 dodawanie, 2 mnożenie itd.
  result = count(t, 1);

  if (result == NULL) {
    printf("BŁĄD! Nie można dzielić przez zero!");
  } else {
    printf("Wynik: %d\n", result);
  }
  return(0);
}
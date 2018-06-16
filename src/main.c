#include <main.h>
#include <stdio.h>

// 1. getoptem wziąć jakie działanie matematyczne
// 2. getoptem wziąć nazwe pliku
// 3. sparsować plik do arraya
// 4. wykonać działanie
// 5. wyswietlic wynik
int main(int argc, char *argv[]) {
  int result;

  // zamiast hello.txt daj tutaj nazwe pliku z getopt
  struct Tuple t = getNumbersFromFile("hello.txt");

  // zamiast 1 daj tutaj z getopta cyfrę odpowiadającą za rodzaj operacji, np. 1 dodawanie, 2 mnożenie itd.
  result = count(t, 1);


  printf("Wynik: %d\n", result);
  return(0);
}
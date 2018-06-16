#include <main.h>
#include <stdio.h>

// 1. getoptem wziąć jakie działanie matematyczne
// 2. getoptem wziąć nazwe pliku
// 3. sparsować plik do arraya
// 4. wykonać działanie
// 5. wyswietlic wynik
int main(int argc, char *argv[]) {
  int result;
  print_calc();
  struct Tuple t = getNumbersFromFile("hello.txt");

  count(t, 1);

  // int a = t.howManyLines;
  // int wynik = 1;

  // for (int i = 0; i < t.howManyLines; i++) {
  //   printf("Liczba %d: %d\n", i, t.numbers[i]);
  //   wynik = wynik*t.numbers[i];
  // }

  // printf("Wynik: %d\n", wynik);
  
  return(0);
}
#include <iostream>

int main(void) {
  //cmpr: comprimento da pista. paineis:quantos paineis serao necessarios no total.
  int cmpr, paineis = 0;
  char pista;
  std::cin >> cmpr;
  for (size_t i = 0; i < cmpr; ++i) {
      std::cin >> pista;
      switch (pista) {
        case 'P':
        case 'C': paineis += 2; break;
        case 'A': ++paineis; break;
      }
  }
  std::cout << paineis << std::endl;
  return 0;
}

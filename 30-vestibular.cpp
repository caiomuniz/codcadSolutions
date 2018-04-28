#include <iostream>

int main(void) {
  //qst: numero de questoes. pontos: quantos pontos o concorrente fez na prova.
  int qst, pontos = 0;
  //gab: gabarito.  resp: respostas dadass pelo concorrente.
  std::string gab, resp;
  //Pede pelos valores de cada variavel
  std::cin >> qst;
  std::cin >> gab;
  std::cin >> resp;
  //Verifica as questoes
  for (size_t i = 0; i < qst; i++) {
    if (gab[i]==resp[i]) pontos++;
  }
  //imprime quantos pontos a pessoa fez.
  std::cout << pontos << std::endl;
  return 0;
}

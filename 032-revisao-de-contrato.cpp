#include <iostream>
using namespace std;
#define TAMANHO_NUMERO nmrOrig.size()

int main(void) {
  char defeito; //Numero defeituoso na maquina.
  string nmrOrig; // Numero de entrada

  //Pede pelos numeros
  while (true)
  {
    cin >> defeito >> nmrOrig;
    if (defeito == '0' && nmrOrig == "0") break;
    //Retira todos os numeros defeituosos da entrada original.
    for (size_t i = 0; i < TAMANHO_NUMERO; i++) {
      if (nmrOrig[i] == defeito) {
        nmrOrig[i] = ' ';
      }
    }

    for (size_t i = 0; i < TAMANHO_NUMERO; i++) {
      if ((i != (nmrOrig.size() - 1)) && (nmrOrig[i] == '0'||nmrOrig[i] == ' ')) {
        nmrOrig[i] = ' ';
      }
      else break;
    }
    bool flag = false;
    //Imprime o novo mumero.
    for (size_t i = 0; i < TAMANHO_NUMERO; i++) {
      if (nmrOrig[i] != ' ') {
        flag = true;
        cout << nmrOrig[i];
      } else if (i==TAMANHO_NUMERO-1 && !flag) {
        cout << "0";
      }
    }
    cout << endl;
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
  //N = maior valor das bolas em jogo.
  //b = numero de bolas em jogo.
  int n, b, verif;
  bool resultado;
  int bolas[91];
  bool verificador[91] = {false};

  while (true)
  {
    cin >> n >> b;
    if (n==0 && b==0) break;
    for (int i = 0; i < n+1; i++)verificador[i] = false;

    //Adiciona as bolas em jogo.
    for (int i = 0; i < b; i++)cin >> bolas[i];
    //Calcula os valores absolutos e os adiciona como verdadeiros no
    //verificador corresp.
    for (int i = 0; i < b; i++) {
      for (int j = i; j < b; j++) {
        verif = abs(bolas[i] - bolas[j]);
        if (!(verificador[verif])) verificador[verif] = true;
      }
    }
    //Verifica se todos os valores de n foram encontrados.
    for(int i = 0; i <= n; i++)
    {
        if (!(verificador[i])) { resultado = false; break;}
        else {resultado = true;}
    }
    //Caso tenham sido, imprime "Y". Caso não, imprime "N".
    if (resultado) {
      printf("Y\n");
    } else {
      printf("N\n");
    }
  }
  return 0;
}

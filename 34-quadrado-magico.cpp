#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int itamMat, iMat[10][10] = {0}, iSom = 0, iSomAt;
  cin >> itamMat;

  //Inicializa o vetor.
  for (size_t i = 0; i < itamMat; i++) {
    for (size_t j = 0; j < itamMat; j++) {
      cin >> iMat[i][j];
    }
  }

  //Calcula a soma.
  for (size_t i = 0; i < itamMat; i++) iSom += iMat[0][i];

  //Verifica a soma das linhas.
  for (size_t i = 1; i < itamMat; i++) {
    for (size_t j = 0; j < itamMat; j++) {
      iSomAt += iMat[i][j];
    }
    //Caso a soma seja igual, reseta os valores pro proximo teste.
    if (iSom == iSomAt) iSomAt = 0;
    else {cout << "-1" << '\n'; return 0;}
  }

  //Verifica a soma das colunas.
  for (size_t i = 0; i < itamMat; i++) {
    for (size_t j = 0; j < itamMat; j++) {
      iSomAt += iMat[j][i];
    }
    //Caso a soma seja igual, reseta os valores pro proximo teste.
    if (iSom == iSomAt) iSomAt = 0;
    else {cout << "-1" << '\n'; return 0;}
  }

  //Soma da diagonal pricipal.
  for (size_t i = 0; i < itamMat; i++) {
    iSomAt += iMat[i][i];
  }
  if (iSom == iSomAt) iSomAt = 0;
  else {cout << "-1" << '\n'; return 0;}

  //Soma da diagonal secundaria
  for (size_t i = 0; i < itamMat; i++) {
    iSomAt += iMat[i][itamMat-i-1];
  }
  if (iSom == iSomAt) cout << iSomAt << '\n';
  else cout << "-1" << '\n';

  return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int m, n, x[1000], y[1000], z[1001], w[1001];
  bool b = false;

  //Zera os vetores a serem usados.
  for (int i = 0; i < 1000; i++) x[i] = 0;
  for (int i = 0; i < 1000; i++) y[i] = 0;
  for (int i = 0; i < 1001; i++) z[i] = 0;

  //Pede pelo tamanho de cada vetor, m = tamanho x; n = tamanho y.
  cin >> m >> n;
  //Pede pelo valor de x e y.
  for (int i = 0; i < m; i++) cin >> x[i];
  for (int i = 0; i < n; i++) cin >> y[i];
  //maior valor entre m e n.
  int maior = max(m, n), j;
  int i;
  //Loop que calcula em z a soma de x e y.
  for (i = maior; i > 0; i--) {
    z[i] += x[i-1] + y[i-1];
    //Converte os numeros caso z = 3 ou z = 2.
    switch (z[i]) {
      case 3:
        z[i] = 1;
        z[i-1] = 1;
        break;
      case 2:
        z[i] = 0;
        z[i-1] = 1;
        break;
    }
  }
  //Retira os zeors desnecessarios no fim do vetor.
  for (i = maior; i > 0; i--) {
    if (z[i] == 0) maior--;
    else break;
  }
  //Imprime a resposta.
  for (i = 0; i < maior; i++) {
    if (i == 0 && z[0] == 0) continue;
    printf("%d ", z[i]);
  }
  printf("%d\n", z[maior]);
}

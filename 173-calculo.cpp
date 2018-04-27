#include<bits/stdc++.h>
using namespace std;

int main()
{
  int m, n, x[1001], y[1001], z[1001], w[1001];
  bool b = false;

  for (int i = 0; i < 1001; i++) x[i] = 0;
  for (int i = 0; i < 1001; i++) y[i] = 0;
  for (int i = 0; i < 1001; i++) z[i] = 0;


  cin >> m >> n;

  for (int i = 0; i < m; i++) cin >> x[i];
  for (int i = 0; i < n; i++) cin >> y[i];

  int i = max(m, n), j;
  int maior = i;

  for (; i > 0; i--) {
    z[i] += x[i-1] + y[i-1];
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

  for (i = maior; i > 0; i--) {
    if (z[i] == 0) maior--;
    else break;
  }
  for (i = 0; i < maior; i++) {
    if (i == 0 && z[0] == 0) continue;
    printf("%d ", z[i]);
  }
  printf("%d\n", z[maior]);
}

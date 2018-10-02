#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int mat[1000][1000];
  int pmax = 0, n, pfixo, pat = 0;
  std::cin >> n;
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++)
      std::cin >> mat[i][j];
  }

  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      for (size_t k = 0; k < n; k++) {
        for (size_t l = 0; l < n; l++) {
          if ((k != i || l != j) && (k == i || l == j)) pat += mat[k][l];
        }
      }
      pmax = std::max(pmax, pat);
      pat = 0;
    }
  }
  std::cout << pmax << '\n';

  return 0;
}

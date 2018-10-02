#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int m[100][100], n[100][100], w;

  scanf(" %d", &w);
  for (size_t i = 0; i < w; i++) {
    for (size_t j = 0; j < w; j++) {
      scanf("%d", &(m[i][j]));
    }
  }
  for (size_t i = 0; i < w; i++) {
    for (size_t j = 0; j < w; j++) {
      scanf("%d", &(n[i][j]));
    }
  }

  for (size_t i = 0; i < w; i++) {
    for (size_t j = 0; j < w; j++) {
      m[i][j] += n[i][j];
    }
  }

  for (size_t i = 0; i < w; i++) {
    for (size_t j = 0; j < w; j++) {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
  return 0;
}

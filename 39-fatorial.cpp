#include<bits/stdc++.h>

long int fat(long int i){
  if (i < 2) return 1;
  return i*fat(i-1);
}

int main(int argc, char const *argv[]) {
  long int i;
  std::cin >> i;
  i = fat(i);
  std::cout << i;
  return 0;
}

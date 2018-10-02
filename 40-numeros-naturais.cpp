#include<bits/stdc++.h>

int nat(int i){
    if (i == 0) return 0;
    return i + nat(i-1);
}

int main(int argc, char const *argv[]) {
  int i;
  std::cin >> i;
  std:: cout << nat(i) << '\n';
  return 0;
}


#include <iostream>

using namespace std;

int soma_vetor(int n, int v[]){
  int tot = 0;

  for (size_t i = 0; i < n; i++)
    tot += v[i];

  return tot;
}

int main(){

	int n, v[100100];
	cin >> n;

	for(int i = 0; i < n; i++)
		cin >> v[i];

	cout << soma_vetor(n,v) << "\n";
}

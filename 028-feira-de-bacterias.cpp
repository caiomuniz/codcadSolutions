#include <bits/stdc++.h>

using namespace std;

int main(){
	double maior = 0, atual;
	int n, dias, resp, qtde;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> qtde >> dias;

		atual = log2(qtde) * dias;
		if(atual > maior){ resp = i; maior = atual;}
	}

	cout << resp << endl;

	return 0;
}

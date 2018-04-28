#include <bits/stdc++.h>

using namespace std;

int main(){
	double n, qtde, dias, bigpop = 0, resp;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> qtde >> dias;

		qtde = log2(qtde) * dias;
		if(x > bigpop){ resp = i; bigpop = x;}
	}

	cout << resp << endl;

	return 0;
}

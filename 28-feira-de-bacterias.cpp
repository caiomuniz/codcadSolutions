#include <bits/stdc++.h>

using namespace std;

int main(){
	double max = 0, min;
	int n, dias, resp, qtde;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> qtde >> dias;

		min = log2(qtde) * dias;
		if(min > max){ resp = i; max = min;}
	}

	cout << resp << endl;

	return 0;
}

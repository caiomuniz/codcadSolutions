#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	double caixa, diametro = 0;
	int raio;

	for (int i = 0; i < 3; i++) {
		cin >> caixa;
		diametro += pow(caixa, 2);
	}

	diametro = sqrt(diametro);
	cin >>raio;

	if(diametro > raio*2) cout << "N" << endl;
	else cout << "S" << endl;
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
/*
	Declaracao de variaveis
	cOperation:	Operacao a ser realizada.
	iA && iB:	Numeros a serem operados.
*/
	char cOperation;
	double iA, iB;
	
	cin >> cOperation;
	cin >> iA >> iB;
	
	switch(cOperation)
	{
		case 'M':
		case 'm':
			printf("%.2lf", iA*iB);
			break;
		case 'D':
		case 'd':
			printf("%.2lf", iA/iB);
			break;
	}
	printf("\n");
	return 0;
}

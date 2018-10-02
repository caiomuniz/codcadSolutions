#include <bits/stdc++.h>

using namespace std;

int main(){

	//Declaracao de variaveis	
	int bancos, dividas, reserva[21], dev, cred, val;
	
	while(true){
		bool b = true;

		//pede pela quantidade de bancos e dividas	
		cin >> bancos >> dividas;
		if (bancos == 0 && dividas == 0)
			return 0;
	
		//Pede pelo valor que cada banco tem em sua reserva.	
		for (int i = 1; i <= bancos; i++)
			cin >> reserva[i];

		// Realiza as operacoes de credito
		for (int i = 0; i < dividas; i++){
			cin >> dev >> cred >> val;
			reserva[dev] -= val;
			reserva[cred] += val;
		}	
		//verificase algum banco deve algo
		for (int i = 1; i <=bancos; i++){
			if(reserva[i] < 0)
				b=false;
		}
		if(!b)
			printf("N\n");
		else
			printf("S\n");	
	}
}

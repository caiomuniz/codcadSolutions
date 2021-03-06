//codcad.cpp : define o ponto de entrada para o aplicativo do console.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	/*	riso: String inicial entrada pelo usuario
		vogal: vogais retiradas da string riso
		vorev: string vogal revertida.
	*/
	string riso, vogal, vorev;
	int i = 0;
	cin >> riso;
	while (riso[i] != '\0')
	{
		if (riso[i] == 'a' || riso[i] == 'e' || riso[i] == 'i' || riso[i] == 'o' || riso[i] == 'u')
			vogal += riso[i];
		i++;
  }
	vorev = vogal;
	reverse(vorev.begin(), vorev.end());

	if (vogal == vorev)
		cout << "S\n";
	else
		cout << "N\n";

	return 0;
}

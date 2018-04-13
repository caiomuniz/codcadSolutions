#include <iostream>

using namespace std;

int main()
{
	int iQtPac, iMenPac = 0, iAtPac;
	cin >> iQtPac;
	
	for(int i = 0; i < iQtPac; i++)
	{
		cin >> iAtPac;
		if(i == 0 || iMenPac > iAtPac)iMenPac = iAtPac;
	} 
	
	cout << iMenPac << endl;
}

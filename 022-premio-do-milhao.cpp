#include <iostream>

using namespace std;

#define MILHAO 1000000

int main()
{
	int iDays, iVisits, iTotVisits = 0, iTotDays = 1;
	
	cin >> iDays;
	for(int i=0; i < iDays;i++)
	{
		cin >> iVisits;
		iTotVisits += iVisits;
		
		if(iTotVisits < MILHAO)
			iTotDays++;
	}	
	cout << iTotDays << endl;
}

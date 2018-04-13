#include <iostream>

using namespace std;

int main()
{
	int iNComp, iMinPoints, iPriF, iSegF, iConv=0;
	cin >> iNComp >> iMinPoints;
	
	for(int i =0; i < iNComp; i++)
	{
		cin >> iPriF >> iSegF;
		
		if((iPriF+iSegF) >= iMinPoints)
			iConv++;
	}
	cout << iConv << endl;
}

#include <iostream>

using namespace std;

int main()
{
	bool bAlice, bBeto, bClara;
	
	cin >> bAlice >> bBeto >> bClara;
	
	if(bAlice == bBeto && bAlice == bClara)
		cout << "*" << endl;
	else
	{
		if(bAlice != bBeto && bBeto == bClara)
			cout << "A" << endl;
		else if(bBeto != bAlice && bAlice == bClara)
			cout << "B" << endl;
		else
			cout << "C" << endl;
	}
}

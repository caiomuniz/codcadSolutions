#include <iostream>

using namespace std;

int main()
{
	char cOp;
	int iMax, iVal1, iVal2, iTot;
	
	cin >> iMax;
	cin >> iVal1 >> cOp >> iVal2;
	
	if(cOp == '*') iTot = iVal1 * iVal2;
	else if(cOp == '+') iTot = iVal1 + iVal2;
	
	if(iTot > iMax)
		cout << "OVERFLOW" << endl;
	else
		cout << "OK" << endl;
}

#include <iostream>

using namespace std;

int main(){
	int quant, num, b, countat = 1, countmax = 0;
	cin >> quant;	
	cin >> b;
	for(int i = 1; i < quant; i++)
	{
		cin >> num;
		if(num == b)
			countat++;
		else
		{
			b = num;
			if(countat > countmax)
				countmax = countat;
				
			countat = 1;
		}
	}
	if(countat > countmax)
		countmax = countat;
	
	cout << countmax << endl;
	return 0;
}

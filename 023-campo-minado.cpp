#include <iostream>

using namespace std;

int main()
{
	int iTabuleiro[50], iResp[50], iCol;
	
	cin >> iCol;
	
	for(int i = 0; i < iCol; i++)
	{
		cin >> iTabuleiro[i];
		iResp[i] = iTabuleiro[i];
	}
	
	for(int i = 0; i < iCol; i++)
	{
		if(i == 0)
		{
			if(iTabuleiro[i+1] == 1)
				iResp[i]++;
		}
		else if(i == iCol-1)
		{
			if(iTabuleiro[i-1] == 1)
				iResp[i]++;
		} 
		else
		{
			if(iTabuleiro[i+1] == 1)
				iResp[i]++;
			if(iTabuleiro[i-1] == 1)
				iResp[i]++;
			
		}
		cout << iResp[i] << endl;
	}
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
	/*
		Variable declaration:
		iGx: Gold medals from country x
		iSx: Silver medals form country x
		iBx: Bronze meals from country x 
	*/
	int iG1, iG2, iS1, iS2, iB1, iB2;
	
	//Prompts for medals of country 1
	cin >> iG1 >> iS1 >> iB1;
	//Prompts for medals of country 2
	cin >> iG2 >> iS2 >> iB2;
	
	if(iG1 > iG2)
		printf("A\n");
	else if(iG1 < iG2)
		printf("B\n");
	else
	{
		if(iS1 > iS2)
			printf("A\n");
		else if(iS1 < iS2)
			printf("B\n");
		else
		{
			if(iB1 > iB2)
				printf("A\n");
			else if(iB1 < iB2)
				printf("B\n");
		}
	}		
}

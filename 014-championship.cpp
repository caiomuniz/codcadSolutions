#include <bits/stdc++.h>

using namespace std;

int main()
{
	int iCv, iCe, iCs, iFv, iFe, iFs, iCPoints, iFPoints;
	
	cin >> iCv >> iCe >> iCs >> iFv >> iFe >> iFs;
	
	iCPoints = (iCv*3) + iCe;
	iFPoints = (iFv*3) + iFe;
	
	if(iCPoints == iFPoints)
	{
		if(iCs > iFs)
			printf("C\n");
		else if(iCs == iFs)
			printf("=\n");
		else
			printf("F\n");
	}
	else if(iCPoints > iFPoints)
		printf("C\n");
	else
		printf("F\n");
		
	return 0;
}

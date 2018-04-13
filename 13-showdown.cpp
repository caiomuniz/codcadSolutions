#include <bits/stdc++.h>

using namespace std;

int main()
{
	int coords[2];
	
	for(int i=0; i<2; i++)
		cin >> coords[i];
		
	if( coords[0] < 0 || coords[0] > 432 || coords[1] < 0 || coords[1] > 468)
		printf("fora\n");
	else
		printf("dentro\n");
	return 0;
}

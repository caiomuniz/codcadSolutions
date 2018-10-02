#include <bits/stdc++.h>
using namespace std;

int main()
{
	/*
		Variable declaration
		X: number that is going to be divided
	*/
	int x, counter = 1;
		
	//prompts for the number that is going to get all the dividers
	cin >> x;
	
	//If x is divisible by counter, prints counter.
	while(x >= counter)
	{
		if(x%counter==0)
			printf("%d ", counter);
		counter++;
	}
	
	printf("\n");
}

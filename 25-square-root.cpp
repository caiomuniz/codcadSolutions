#include <bits/stdc++.h>

int main()
{
	int n;
	double r;
	
	std::cin >> n;
	
	for(; n > 0; n--)
	{
		std::cin >> r;
		printf("%.4lf\n", sqrt(r));
	}
	return 0;
}

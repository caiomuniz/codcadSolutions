#include <bits/stdc++.h>

using namespace std;

int main()
{
	//Variable declaration
	int width1, height1, area1, width2, height2, area2;
	
	cin >> width1 >> height1;
	cin >> width2 >> height2;
	
	area1 = width1*height1;
	area2 = width2*height2;
	
	if (area1 > area2)
		printf("Primeiro\n");
	else if(area1==area2)
		printf("Empate\n");
	else
		printf("Segundo\n");
}

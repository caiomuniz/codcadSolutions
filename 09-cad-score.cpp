#include <bits/stdc++.h>

using namespace std;

int main()
{
	/*
		Variable declaration
		iPoints: Actual quantity of points the User has
		iFases: How many fases the user wants to go through
		iarrPoints: How many ponts he will get in each fase
	*/
	int iPoints, iFases, iarrPoints[10000];
	
	//Prompts user for its points and how many fases he is going to play
	cin >> iPoints >> iFases;
	
	//Fills up the array with how many oints he is going to get in each fase.
	for(int i = 0; i < iFases; i++)
		cin >> iarrPoints[i];
	
	//Point calculation
	for(int i = 0; i < iFases; i++)
	{
		iPoints += iarrPoints[i];
		//Points cant get below 0 or over 100.
		if(iPoints > 100)
			iPoints = 100;
		else if(iPoints < 0)
			iPoints = 0;
	}
	
	printf("%d\n", iPoints);
}

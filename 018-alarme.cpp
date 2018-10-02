#include<iostream>

using namespace std;

#define MINDIA 1440
#define MINHOR 60

int main()
{
	int h1, m1, h2, m2, mt;
	
	while(true)
	{
		cin >> h1 >> m1 >> h2 >> m2;
		if(h1==0 && m1==0 && h2==0  & m2==0 )
			break;
		
		
		h1++; h2++; m1++; m2++;
		if(h1==h2)
		{
			if(m1 >= m2){
				h1--; h2--; m1--; m2--;
				cout << (MINDIA -(h1*MINHOR)-m1) + (h2*MINHOR) + m2;
			}
			else 
				cout << m2-m1;
		}
		else if(h1 < h2)
			cout << (h2 - h1 - 1) * MINHOR + (MINHOR - m1 + m2);
		else
		{
			h1--; h2--; m1--; m2--;
			cout << (MINDIA -(h1*MINHOR)-m1) + (h2*MINHOR) + m2;
		}
		cout << endl;
	}
	cout << endl;
}

// NSTEPS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;


int main()
{
	int N;
	cin >> N;

	while(N--)
	{
		int x,y;

		cin >> x >> y;
		
		if((x == y) || (x-y==2))
		{
			if(x%2 == 0 && y%2 == 0)
				cout << x+y;
			else if(x%2 != 0 && y%2 != 0)
				cout << x+y-1;
			else
				cout << "No Number";
		}
		else
		{
			cout << "No Number";
		}

		cout << endl;
	}
	return 0;
}


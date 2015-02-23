// PRIME1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		long m,n;
		cin >> m >> n;

		for(long i = m;i<=n;i++)
		{
			if(i == 1)
				continue;

			long j = 2;
			for(;j<=sqrt(double(i));j++)
			{
				if(i%j == 0)
					break;			
			}

			if(j>sqrt(double(i)))
				cout << i;

			cout << endl;
		}
	}

	return 0;
}


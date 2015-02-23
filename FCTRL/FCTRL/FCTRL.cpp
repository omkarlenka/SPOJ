// FCTRL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>

using namespace std;
int Z(int N)
{
	int p =1;
	int res = 0;
	int c=0;

	do
	{
		c= N/pow(5,double(p));
		res+=c;
		p++;
	}while(c);
	return res;
}

int main()
{
	int T,N;
	cin >> T;
	while(T--)
	{
		cin >> N;

		cout << Z(N);
		cout << endl;
	}

	return 0;
}


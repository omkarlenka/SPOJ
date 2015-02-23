// ADDREV.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>


using namespace std;

int reverse(int x)
{
	int rev=0;

	while(x!=0)
	{
		int d = x%10;
		rev=rev*10+d;		
		x = (x-d)/10;
	}	
	
	return rev;
}

int main()
{
	int N;
	cin >> N;

	while(N--)
	{
		int A,B;
		cin >> A >> B;

		cout << reverse(reverse(A) + reverse(B));
		cout<<endl;
	
	}
	return 0;
}


// FCTRL2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int t;
	cin >> t;
		
	while(t--)
	{
		int n,temp=0;
		vector<int> v;
		cin >> n;
		
		v.push_back(1);
		
		for(int i =2;i<=n;i++)
		{
			for(int j=0;j<v.size();j++)
			{
				int x = i*v[j]+temp;
				v[j] = x%10;
				temp = x/10;				
			}	

			while(temp)
			{
				v.push_back(temp%10);
				temp /=10;	
			}	
		}	
		
		for(int i=v.size()-1;i>=0;i--)
			cout << v[i];
			
		cout <<endl;	
	}	
}
	




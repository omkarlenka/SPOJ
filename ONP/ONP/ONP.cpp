// ONP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
	int t;
	
	cin >> t;
	
	while(t--)
	{
		string exp;
		stack<char> s;
		
		cin >> exp;
		
		for(int i=0;i<exp.length();i++)
		{
			if((exp[i] == '+') || (exp[i] == '-') || (exp[i] == '*') || (exp[i] == '/') || (exp[i] == '^'))
			{
				s.push(exp[i]);
			}
			else if(exp[i] == '(')
			{
				continue;
			}
			else if(exp[i] == ')')
			{
				cout << s.top();
				s.pop();
			}
			else
			{
				cout << exp[i];
			}
		}	
		while(!s.empty())	
		{
			cout << s.top();
			s.pop();
		}
		cout << endl;
	}			
}



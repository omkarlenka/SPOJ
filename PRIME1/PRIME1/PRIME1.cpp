// PRIME1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

void trad_sieve(bool arr[], int l)
{
    memset(arr,0,l);

    for(int i=1;i<l;i++)
    {
        if(arr[i] == 0)
        {
            int j=(i+1)*2;
            
            for(;j<=l;j+=(i+1))
            {
                arr[j-1] =1;
            }
        }
    }
/*
    for(int i =1;i<l;i++)
    {
        if(!arr[i])
            cout << i+1 << " ";
    }
*/
	
}

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        long m,n;
		int q;
        cin >> m >> n;

        int size = n-m+1;

        bool *seg_sieve = new bool[size];
        memset(seg_sieve,0,size);

		q = sqrt(double(n));

        bool *sieve = new bool[q];

        trad_sieve(sieve, q);

        for(int i=1;i<q;i++)
        {
            if(sieve[i] == 0)
            {
                int d = m/(i+1);
                d *= (i+1);
           
				for(int j= d;j<=n;j+=(i+1))
                {
					if(j<m)
						continue;
                    seg_sieve[j-m] = 1;
                }
            }
        }

		for(int i=1;i<q;i++)
        {
            if(i+1 >=m && i+1<=n && sieve[i] == 0 && (i+m!=1))
            {
                cout << i+1;
				cout << endl;
            }
        }

        for(int i=0;i<size;i++)
        {
            if(seg_sieve[i] == 0)
            {
				if((i+m)!=1)
				{
					cout << i+m;
					cout << endl;
				}
            }
        }
		 cout << endl;
    }

    return 0;
}







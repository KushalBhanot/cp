#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin >> t;
	
	long long int a[t];
	for(long long int i=0; i<t; i++)
	{
	    cin >> a[i];
	}
	
	sort(a, a+t);
	
	long long int price, revenue;
	long long int b[t];
	for(long long int i=t-1, j=0; i>=0, j<t; i--, j++)
	{
	   price = a[i];
	   revenue = price * (t-i);
	   b[i] = revenue;
	}
	
	sort(b, b+t);
	
	cout << b[t-1];
	
	return 0;
}

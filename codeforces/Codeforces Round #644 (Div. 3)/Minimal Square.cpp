#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long double x) 
{   
  long double sr = sqrt(x); 
  
  return ((sr - floor(sr)) == 0); 
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        
        int area = 2*a*b;
        
        if (isPerfectSquare(area)) cout << area << endl;
        else{
            int nextN = floor(sqrt(area)) + 1;
            
            cout << nextN * nextN << endl;
        }
    }
    
    return 0;
}
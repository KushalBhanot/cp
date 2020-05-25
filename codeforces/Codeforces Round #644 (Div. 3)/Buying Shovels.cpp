#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        
        if(k==1) cout << n << endl;
        else if(k > n) cout << 1 << endl;
        else if(k == n) cout << n << endl;
        
        else {
            vector<int> numbers;
            for(ll i=1; i<=k; i++)
            {
                numbers.push_back(i);
            }
            
            for(ll i=k; i>=1; i--)
            {
                if(n%i == 0)
                {
                    cout << n/i << endl;
                    break;
                }
            }
        }
    }
    
    return 0;
    
}
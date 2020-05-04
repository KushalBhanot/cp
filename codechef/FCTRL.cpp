#include <iostream>
using namespace std;
typedef long long int ll;

int main() {
    ll t;
    cin >> t;
    
    while(t--)
    {
        ll n;
        cin >> n;
        
        ll count=0;
        int d = 5;
        
        while(n>=d)
        {
            count += n/d;
            d *= 5;
        }
        
        cout << count << endl;
    }
    
	return 0;
}

#include<iostream>
using namespace std;
#define ll unsigned long long int

int main()
{
    ll t;
    cin >> t;
    
    while(t--)
    {
        ll n;
        cin >> n;
        
        ll a[n], b[n];
        for(ll i=0; i<n; cin >> a[i++]);
        for(ll i=0; i<n; cin >> b[i++]);
        
        ll sum1=0, sum2=0, answer=0;
        for(ll i=0; i<n; i++)
        {
            sum1 += a[i];
            sum2 += b[i];
            
            if(sum1 == sum2 && a[i] == b[i]) answer += a[i];
        }
        
        cout << answer << endl;
    }
    
    return 0;
}
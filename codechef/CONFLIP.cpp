#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int g;
        cin >> g;
        
        while(g--)
        {
            ll i, n, q;
            cin >> i >> n >> q;
            
            if(n%2==0) cout<<n/2<<endl;
            else
            {
                if(q==i) cout<<n/2<< endl;
                else cout << (n+1)/2 << endl;
            }
        }
    }
    
    return 0;
}

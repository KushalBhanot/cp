#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool cmp(int a, int b)
{
    return a>b;
}

int main()
{
    ll t;
    cin >> t;
    
    while(t--)
    {
        ll n;
        cin >> n;
        
        vector<int> cities;
        for(int i=1; i<=n; i++)
        {
            cities.push_back(i);
        }
        
        vector<int> cost;
        int d;
        for(int i=0; i<cities.size(); i++)
        {
            for(int j=i+1; j<cities.size(); j++)
            {
                d = cities[i] & cities[j];
                cost.push_back(d);
            }
        }

        sort(cost.begin(), cost.end(), cmp);

        ll traverse = n-1;
        ll result=0;
        for(ll i=0; i<traverse; i++)
        {
            result += cost[i];
        }

        cout << result << endl;
    }
    
    return 0;
}
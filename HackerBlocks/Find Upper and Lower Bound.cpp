#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> numbers;
    while(n--)
    {
        int number;
        cin >> number;
        
        numbers.push_back(number);
    }
    
    sort(numbers.begin(), numbers.end());
    
    int q;
    cin >> q;
    
     vector<int>::iterator lobo;
     vector<int>::iterator upbo;
    while(q--)
    {
        int query;
        cin >> query;
        
        lobo = lower_bound(numbers.begin(), numbers.end(), query);
        upbo = upper_bound(numbers.begin(), numbers.end(), query);
        
        if(lobo != numbers.end())
        {
            cout << lobo - numbers.begin() << " ";
        }
        else cout << -1 << " ";
        
        if(upbo != numbers.end())
        {
            cout << upbo - numbers.begin() - 1 << endl;
        }
        else cout << -1 << endl;
    }
    
    return 0;
}
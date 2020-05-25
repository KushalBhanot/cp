#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        vector<int> s;
        while(n--)
        {
            int str;
            cin >> str;
            
            s.push_back(str);
        }
        
        sort(s.begin(), s.end());
        
        for(auto it=s.begin(); it!=s.end(); it++)
        {
            cout << *it << " ";
        }
        
        cout << endl;
        
        vector<int> diff;
        int d;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                d = s[j] - s[i];
                diff.push_back(d);
            }
        }
        
        for(auto it=diff.begin(); it!=diff.end(); it++)
        {
            cout << *it << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}
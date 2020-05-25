#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        
        vector<string> strings;
        while(n--)
        {
            char str[m];
            cin >> str;
            
            strings.push_back(str);
        }
        
        for(auto it=strings.begin(); it!=strings.end(); it++)
        {
            for(int i=0; i<m ; i++)
            {
                
            }
        }
    }
    
    return 0;
}
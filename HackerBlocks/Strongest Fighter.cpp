#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> powers;
    while(n--)
    {
        int power;
        cin >> power;
        
        powers.push_back(power);
    }
    
    int k;
    cin >> k;
    
    vector<int> result;
    
    int max=0, z=0;
    int rows = (n-k+1)%10;
    for(int i=0; i<rows; i++)
    {
        vector<int> temp;
        
        for(int j=0; j<k; j++)
        {
            temp.push_back(powers[z]);
            z++;
        }
        
        for(auto it=temp.begin(); it!=temp.end(); it++)
        {
            cout << *it << " ";
        }
        
        cout << endl;
        
        max = *max_element(temp.begin(), temp.end());
        result.push_back(max);
        z -= (k-1);
    }
    
    
    for(auto it=result.begin(); it!=result.end(); it++)
    {
        cout << *it << " ";
    }
    
    return 0;
}
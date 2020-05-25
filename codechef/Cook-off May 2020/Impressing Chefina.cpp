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
        
        int arr[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; i<m; j++)
            {
                cin >> arr[i][j];
            }
        }
        
        int flag = 1;
        for (int i = 0, k = m-1; i < m/2; i++, k--) 
        { 
            for (int j = 0; j < n; j++) 
            { 
                if (arr[i][j] != arr[k][j]) 
                { 
                    flag = 0; 
                    break; 
                } 
            } 
        } 
        
        if(flag == 1) 
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        }
        else cout << -1 << endl;
    }
    
    return 0;
}
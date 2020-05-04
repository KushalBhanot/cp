#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    
    while(t--)
    {
        long long int n;
        cin >> n;
        
        long long int arr[n];
        for(long long int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        
        long long int count=0, temp;
        for(long long int i=0; i<n; i++)
        {
            temp = arr[i];
            if(i==0) count++;
            
            if(arr[i+1] > temp)
            {
                arr[i+1] = temp;
            }
            
            else {
                count++;
            }
        }
        
        cout << count << endl;;
    }
    
    return 0;
}

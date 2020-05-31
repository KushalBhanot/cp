#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int arr[6];
        for(int i=0; i<6; cin >> arr[i++]);
        
        int p = arr[5];
        for(int i=0; i<5; i++)
        {
            arr[i] = arr[i] * p;
        }

        int sum=0;
        for(int i=0; i<5; i++)
        {
            sum += arr[i];
        }

        if(sum <= 120)
        {
            cout << "No" << endl;
        }
        else cout << "Yes" << endl;
    }
    
    return 0;
}
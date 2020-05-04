#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; cin >> arr[i++]);

    int current_sum = 0;
    int max_sum = INT_MIN;
    for(int i=0; i<n; i++)
    {
        current_sum += arr[i];
        max_sum = max(max_sum, current_sum);
        current_sum = max(current_sum, 0);
    }

    cout << "Max subarray sum: " << max_sum << endl;

    return 0;
}
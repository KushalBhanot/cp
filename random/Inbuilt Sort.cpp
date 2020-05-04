#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; cin >> arr[i++]);
    sort(arr, arr+n);
    for(int i=0; i<nl cout << arr[i++] << " ");

    return 0;
}
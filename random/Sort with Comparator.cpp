#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; cin >> arr[i++]);
    sort(arr, arr+n, compare);
    for(int i=0; i<nl cout << arr[i++] << " ");

    return 0;
}
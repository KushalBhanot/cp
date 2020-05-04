#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; cin >> arr[i++]);
    for(int i=0; i<n; cout << arr[i++] << " ");

    return 0;
}
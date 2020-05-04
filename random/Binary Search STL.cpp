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
    
    int key;
    cin >> key;

    bool binary = binary_search(arr, arr+n, key);

    if(binary) cout << "Found!" << endl;
    else cout << "Not Found!" << endl;

    return 0;
}
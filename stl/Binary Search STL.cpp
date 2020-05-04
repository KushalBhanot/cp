#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {20, 30, 40, 40, 40, 50, 100, 1100};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin >> key;

    bool present = binary_search(arr, arr+n, key);
    if(present) cout << "Present" << endl;
    else cout << "Absent !" << endl;

    // Two more things
    // Get the index of the element
    // lower_bound(s, e, key) and upper_bound(s, e, key)

    auto lb = lower_bound(arr, arr+n, 40); // You can write int* in place of auto
    cout << "Lower bound of 40 is " << lb - arr << endl;

    auto ub = upper_bound(arr, arr+n, 40);
    cout << "Upper bound of 40 is " << ub - arr << endl;

    cout << "Frequency of 40 is " << ub - lb << endl;

    return 0;
}
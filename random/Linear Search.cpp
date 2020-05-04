#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; cin >> arr[i++]);

    int key;
    cin >> key;

    int flag = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key) flag=1;
    }
    if(flag == 1) cout << "Key Present" << endl;
    else cout << "Not Present" << endl;

    return 0;
}
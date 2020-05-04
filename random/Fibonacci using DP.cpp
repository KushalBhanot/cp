#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int fibonacci[n];
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(int i=2; i<n; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

    for(auto x : fibonacci) cout << x << " ";

    return 0;
}
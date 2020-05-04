#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    
    if(a<100 && a!=42)
    {
        cout << a << "\n";
        return main();
    }
    
    return 0;
}

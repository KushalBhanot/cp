#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int x;
        cin >> x;
        
        if(x==2010 || x==2015 || x==2016 || x==2017 || x==2019) cout << "HOSTED" << endl;
        else cout << "NOT HOSTED" << endl;
    }
    
    return 0;
}
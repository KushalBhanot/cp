#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    int a, laddu=0, r;
    string n, s;
    while(t--)
    {
        cin >> a >> n;
        while(a--)
        {
            cin >> s;
            if(s == "CONTEST_WON")
            {
                cin >> r;
                if(r>20) laddu += 300;
                else laddu += 300 + (20-r);
            }
            
            else if (s == "TOP_CONTRIBUTOR") laddu += 300;
            
            else if (s == "BUG_FOUND")
            {
                cin >> r;
                laddu += r;
            }
            
            else if (s == "CONTEST_HOSTED") laddu += 50;
        }
        
        if(n == "INDIAN") cout << laddu/200 << endl;
        else cout << laddu/400 << endl;
        
        laddu=0;
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int testcases;
    cin >> testcases;
    
    while(testcases--)
    {
        string str;
        cin >> str;
        
        int k = str.length();
        int a[26][2] = {0, 0};
        
        for(int i=0; i<(k/2); i++)
        {
            a[str[i] - 97][0]++;
        }
        for(int i=(k+1)/2; i<k; i++)
        {
            a[str[i] - 97][1]++;
        }
        int check=0;
        for(int i=0; i<26; i++)
        {
            if(a[i][0] != a[i][1])
            {
                check = 1;
                break;
            }
        }
        
        if(check==0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
	return 0;
}

#include <iostream>
using namespace std;

int main() {
    int testcases;
    cin >> testcases;
    
    while(testcases--)
    {
        unsigned int number;
        cin >> number;
        
        unsigned int reverse = 0;
        while(number){
            reverse = (reverse * 10) + (number % 10);
            number /= 10;
        }
        
        cout << reverse << "\n";
    }
    
	return 0;
}

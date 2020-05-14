#include <iostream>
#include <vector>
#include <algorithm>

bool comp(int a, int b) {
    return a > b;
}

int main()
{
    std::vector<int> x = {1, 53, 23, 43, 1, 2};

    std::cout << x[1] << std::endl;

    sort(x.begin(), x.end()); // O(n logn)
    // 1, 1, 2, 23, 43, 53

    bool present = binary_search(x.begin(), x.end(), 43); //true
    present = binary_search(x.begin(), x.end(), 0); //false

    x.push_back(100);
    present = binary_search(x.begin(), x.end(), 100);
    // 1, 1, 2, 23, 43, 53, 100

    x.push_back(100);
    x.push_back(100);
    x.push_back(100);
    // 1, 1, 2, 23, 43, 53, 100, 100, 100, 100, 123
    x.push_back(123);

    // std::vector<int>::iterator it1 = lower_bound(x.begin(), x.end(), 100); // will point to the 6th index (>=)
    auto it1 = lower_bound(x.begin(), x.end(), 100);
    // std::vector<int>::iterator it2 = upper_bound(x.begin(), x.end(), 100); // will point to the 10th index (>)
    auto it2 = upper_bound(x.begin(), x.end(), 100);

    std::cout << *it1 << " " << *it2 << std::endl;
    std::cout << it2 -  it1 << std::endl; // 10 - 6 = 4 
    // It will be performed in constant time O(1)

    sort(x.begin(), x.end(), comp);
    // 123, 100, 100, 100, 100, 53, 43, 23, 2, 1, 1

    // for(std::vector<int>::iterator it3 = x.begin(); it3 != x.end(); it3++)
    // {
    //     std::cout << *it3 << " ";
    // }
    for(int &a: x) // reference
    {
        a++; // every element of the vector will be increased by one
        std::cout << a << " ";
    }
    std::cout << std::endl;

    return 0; 
 }
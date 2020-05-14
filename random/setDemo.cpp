#include <iostream>
#include <algorithm>
#include <set>

int main()
{
    std::set<int> x;
    x.insert(1);
    x.insert(2);
    x.insert(-1);
    x.insert(-10);
    // -10, -1, 1, 2

    for(int a: x)
        std::cout << a << " ";
    std::cout << std::endl;

    auto it1 = x.find(0);
    if(it1 == x.end()) std::cout << "Element is not present in the set" << std::endl;
    else std::cout << *it1 << std::endl;

    auto it2 = x.lower_bound(1);
    std::cout << *it2 << std::endl;

    auto it3 = x.upper_bound(2);
    if(it3 == x.end()) std::cout << "Element is not present in the set" << std::endl;
    else std::cout << *it3 << std::endl;

    x.erase(-1);
    for(int a: x)
        std::cout << a << " ";
    std::cout << std::endl;

    return 0; 
 }
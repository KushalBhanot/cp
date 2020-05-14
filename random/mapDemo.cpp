#include <iostream>
#include <string>
#include <map> 

int main()
{
    std::map<int , int> x;
    x[1] = 54;
    x[54] = 323;
    x[2] = 9;
    x[9232] = 23;

    x.insert(std::pair<int, int> (3, 40));

    for(auto it = x.begin(); it != x.end(); it++)
    {
        std::cout << it->first << "\t" << it->second << "\n";
    }
    // map will make an ascending order with respect to keys

    std::map<char, int> count;
    std::string name = "kushal bhanot";

    for(auto a: name)
    {
        count[a]++;
    }

    std::cout << count['a'] << " " << count['z'] << std::endl;

    auto it1 = x.find(2);
    std::cout << it1->second << std::endl;

    x.erase(1);

    for(auto it = x.begin(); it != x.end(); it++)
    {
        std::cout << it->first << "\t" << it->second << "\n";
    }

    return 0;
}
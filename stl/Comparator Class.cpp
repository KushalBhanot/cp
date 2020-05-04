#include<iostream>
#include<list>
#include<vector>
using namespace std;

template<typename T>
int search(T arr[], int n, T key){
    for(int p=0; p<n; p++){
        if(arr[p] == key)
            return p;
    }

    return n;
}

template<class ForwardIterator, class T, class Compare>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key, Compare cmp){
    while(start != end){
        if(cmp(*start, key)){
            return start;
        }
        start++;
    }

    return end;
}

class Book {
    public:
        string name;
        int price;

    Book() {

    }

    Book(string name, int price) {
        this->name = name;
        this->price = price;
    }
};

class BookCompare {
    public:
        bool operator()(Book A, Book B) {
            if(A.name == B.name)
                return true;
            else
                return false;
        }
};

int main()
{
    Book b1("C++", 100); // Old edition
    Book b2("Python", 120);
    Book b3("Java", 130);
    Book b4(b1);

    list<Book> l; // To use vector, use vector<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);

    Book key("C++", 110); // New edition
    BookCompare cmp;

    list<Book>::iterator it = search(l.begin(), l.end(), key, cmp); //list<Book>::iterator is same as writing auto
    if(it != l.end()){
        cout << "Book found in the library";
    }
    else cout << "Not found";

    // BookCompare cmp;
    // if(cmp(b1, key)){
    //     cout << "True, same books!";
    // }

    return 0;
}
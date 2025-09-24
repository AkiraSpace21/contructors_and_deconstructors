#include <iostream>
using namespace std;

int objectCount = 0;

class LibraryBook {
    string name;
    string writer;
    float cost;

public:
    LibraryBook() {
        objectCount++;
        cout << "Current objects created: " << objectCount << endl;
    }

    ~LibraryBook() {
        objectCount--;
        cout << "Objects remaining: " << objectCount << endl;
    }
};

int main() {
    LibraryBook lb1, lb2, lb3;
    {
        LibraryBook lb4; // temporary object in inner scope
    }

    return 0;
}

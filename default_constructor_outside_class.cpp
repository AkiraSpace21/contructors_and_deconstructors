#include <iostream>
#include <string>
using namespace std;

class Novel {
    string bookName;
    string writer;
    float cost;

public:
    Novel(); 
    void show();
};


Novel::Novel() {
    cout << "Book title: ";
    getline(cin, bookName);

    cout << "Writer name: ";
    getline(cin, writer);

    cout << "Book cost: ";
    cin >> cost;
    cout << endl;
}

void Novel::show() {
    cout << "Name: " << bookName
         << ", Writer: " << writer
         << ", Cost: " << cost << endl;
}

int main() {
    Novel n1;
    n1.show();
    return 0;
}

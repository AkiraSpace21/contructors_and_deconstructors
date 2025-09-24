#include <iostream>
using namespace std;

class Pair {
    int firstNum, secondNum;

public:
    // Parameterized constructor
    Pair(int x, int y) {
        firstNum = x;
        secondNum = y;
        cout << "\nParameterized constructor called!" << endl;
    }

    void show() {
        cout << "First number: " << firstNum << endl;
        cout << "Second number: " << secondNum << endl;
    }
}; // class ends

int main() {
    Pair p1(10, 20);
    p1.show();

    return 0;
}

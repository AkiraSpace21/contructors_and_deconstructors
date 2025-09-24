#include <iostream>
using namespace std;

class Learner {
    int years;
    string fullName;

public:
    
    Learner(string nm, int y) {
        fullName = nm;
        years = y;
    }

    Learner(const Learner &obj) {
        fullName = obj.fullName;
        years = obj.years;
        cout << "Copy constructor executed!" << endl;
    }

    void show();
}; 

void Learner::show() {
    cout << "Full Name: " << fullName << endl;
    cout << "Age: " << years << endl;
}

int main() {
    Learner l1("Tripatjot", 19);
    l1.show();

    cout << "\nOriginal instance\n";

    Learner l2 = l1;  // calls copy constructor
    cout << "Cloned instance\n";
    l2.show();

    return 0;
}

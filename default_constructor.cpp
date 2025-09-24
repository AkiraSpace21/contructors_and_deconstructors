#include <iostream>
using namespace std;

class Pupil {
    int id;
    char fullName[50];
    double tuition;

public:
  
    Pupil() {
        cout << "Enter student ID: ";
        cin >> id;
        cout << "Enter student name: ";
        cin >> fullName;
        cout << "Enter tuition fee: ";
        cin >> tuition;
        cout << endl;
    }

    void showData() {
        cout << "Student " << fullName << " (ID: " << id << ") "
             << "has a fee of " << tuition << endl;
    }
}; 

int main() {
    Pupil p1;
    p1.showData();
    return 0;
}

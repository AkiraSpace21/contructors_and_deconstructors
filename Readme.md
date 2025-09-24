# Aim
Learn and implement **constructors** and **destructors** in C++.

# Software Required
- Visual Studio Code  
- Windows / Linux

# Theory

## 1. Constructor
A constructor is a special member function of a class that is automatically called when an object of the class is created. Its primary purpose is to **initialize the object’s data members**.

### Key Features
- Has the **same name as the class**.
- **No return type**, not even void.
- Called **automatically** when an object is instantiated.
- Can be **overloaded** (multiple constructors with different parameters).

### Types of Constructors

#### 1. Default Constructor
- Takes **no parameters**.
- Compiler provides one automatically if no other constructor is defined.
- Used to initialize objects with **default values**.

```cpp
class Box {
public:
    Box() {
        cout << "Default constructor called!" << endl;
    }
};

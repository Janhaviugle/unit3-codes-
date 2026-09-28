#include <iostream>
using namespace std;
class Base {
public:
void display() const {
cout << "Base display function\n";
}
};
class Derived : public Base {
public:
void display() const {
cout << "Derived display function\n";
}
};
int main() {
Derived derivedObject;
Base* basePointer = &derivedObject;
basePointer->display();
10
return 0;
}   
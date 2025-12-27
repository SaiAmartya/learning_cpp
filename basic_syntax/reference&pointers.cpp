#include <iostream>

using namespace std;

int main() {

    int existing = 134; // declare existing variable

    // Reference: variable used as an alias to an existing variable -helpful for easy memory management
    int& new_name = existing;
    // cout << new_name << endl; // prints 134

    // Memory Address is accesible through '&'
    // cout << &new_name << endl; 

    // Pointer: stores memory address AS the value
    string day = "Monday";
    string* ptr = &day; // pointer to memory address of day

    cout << *ptr << endl; // prints 'Monday'
    cout << ptr << endl; // prints memory address directly

    // Changing pointer value changes value at original memory (and thus original variable's value)
    *ptr = "Tuesday";

    cout << *ptr << endl;
    cout << day << endl;

    int* null_ptr = nullptr; // null pointer (typesafe pointer value)

    return 0;
}
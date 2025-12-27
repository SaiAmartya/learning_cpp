#include <iostream>

using namespace std;

/*
Below is the main function
- returns type "int", and takes in no parameters
 */ 

int main() {

    /* USING CHARACTER OUTPUT std::cout */
    cout << "Hello, world test!"; 
    cout << "I am " << 16 << " years old."; // multiple insertion operators used in the same line
    cout << " Here is a new line: \n THIS TEXT SHOULD BE IN A NEW LINE \n"; // new lines added by back-slash n
    
    // std::endl (stands for end line) can also create new lines
    cout << "Line 1..." << endl;
    cout << "Line 2..." << endl;
    cout << "Line 3..." << endl;

    /* USING CHARACTER INPUT std::cin */
    int x; // define an integer variable
    cout << "Enter your age: ";
    cin >> x;
    cout << "You are " << x << " years old. \n"; // print users age

    // Read multiple user inputs (differentiated with spaces)
    int y, z;
    cout << "Enter some numbers: ";
    cin >> y >> z;
    cout << "You entered " << y << " and " << z;

    return 0;
}


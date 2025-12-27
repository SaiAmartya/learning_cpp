#include <iostream>

using namespace std;

// return type of a function must be what's defined before the function's name

// must return a double:
double valueOfPi() {
    double pi = 3.1415; // only declared within this function scope
    return pi;
}

// void function: does not have to return a value
void doSomething() {
    cout << "functions are GOATED!\n";
}

int feetToInches(int ft) {
    return ft * 12;
}

double TotalPrice(int items, double price, bool discount = false) {
    if (discount) return 0.8 * items * price;
    else return items * price;
}

// C++ PASS BY REFERENCE IN FUNCTIONS
void swap(int &i, int &j) {
    int temp = i;
    i = j, j = temp;
}

/* FUNCTION OVERLOADING 
Either:
- each function has different types or number of parameters
*/

// Although we defined swap function already above, the below functions handle different types of inputs
void swap(string &i, string &j) {
    string temp = i;
    i = j, j = temp;
}

void swap(double &i, double &j) {
    double temp = i;
    i = j, j = temp;
}

int main() {
    // doSomething();
    // cout << feetToInches(6) << endl;
    // cout << TotalPrice(3, 2.50, true) << endl;

    // use function that works directly with reference
    string first = "sup";
    string second = " 2";

    swap(first, second);

    cout << first << second; 
    return 0;
}
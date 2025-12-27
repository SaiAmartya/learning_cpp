#include <iostream>

using namespace std;

int main() {
    // Declaring a variable (create and assign value)
    int num = 83;

    // Defining a variable (creation without assignment)
    string name;

    // Assigning a variable (assigning or changing value of existing variable)
    name = "Sai Amartya";
    num = 16;

    // Declaring multiple variables with same type within single statement; a comma-seperated list
    int a = 1, b = 2, c = 3;  
    char first = 'a', second = 'b', third = 'c';

    const double pi = 3.14; // Const variables must be initialized when declared

    /* Different C++ Data Types */
    int number = 223;
    double decimal = -200.0; // floating point numbers
    char single = 'a'; // single characters
    string word = "test"; // sequence of characters
    bool know_cpp = true; // truth values

    // type conversion; notation: (type) value

    double first_num = 3.5;
    int second_num = (int) first_num; // b is now 3

    // String methods

    string first_word = "Hello";
    string second_word = "World"; 

    string message = first_word + " " + second_word;

    // message is now "Hello World"
    cout << message << endl;

    char first_letter = message[0];

    cout << "First letter of the above message is: " << first_letter << endl;
}
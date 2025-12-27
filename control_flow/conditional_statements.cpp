#include <iostream>

using namespace std;

int main() {
    bool condition = true;

    /* STANDARD CONDITIONAL STATEMENTS

    if (condition) {
        cout << "condition met." << endl;
    } else {
        cout << "condition not met." << endl; 
    } 
    
    // SHORTHAND if else; syntax: variable = (condition) ? condition_is_true : condition_is_false;
    string msg = (condition) ? "Condition was met..." : "Condition was not met...";
    cout << msg << endl;

    // Curly brackets can be omitted if there's only a single statement inside conditional block
    if (condition) cout << "condition met again." << endl;

    */

    // Switch Statements
    int grade;
    cout << "Test out switch statements, enter a grade:";
    cin >> grade;

    switch (grade) {
        case 9:
            cout << "Freshman\n";
            break; // needed to signal compiler to jump out of a case
        case 10:
            cout << "Sophomore\n";
            break;
        case 11:
            cout << "Junior\n";
            break;
        case 12:
            cout << "Senior\n";
            break;
        default: // if none of the other cases were met
            cout << "Invalid Grade...\n";
            break;
    }
}


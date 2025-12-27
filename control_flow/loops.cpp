#include <iostream>
#include <vector>

using namespace std;

int main() {
    /* WHILE LOOPS */
    int count = 1;
    while (count <= 5) {
        cout << count << endl;
        count++;
    }

    // do while loops: execute at least once even if condition is false initially
    int price = 300;
    do {
        cout << "Too expensive!\n";
    } while (price > 500);

    /* FOR LOOPS 
    Consists of:
    - counter variable
    - condition for executing code block
    - increment/decrement to counter variable: executed after every iteration
    */
    for (int i = 1; i <= 5; i++) {
        cout << i << ' ';
    }

    // loop through arrays
    int fibonacci[5] = {0, 1, 1, 2, 3};
    for (auto i : fibonacci) { // 'auto' keyword to deduce type based on the list
        cout << i;
    }
}
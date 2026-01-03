#include <iostream>

using namespace std;

// ARRAYS
int main() {
    // fixed-size collections
    int nums[5] = {0, 1, 5, 3, 4};
    cout << nums[3];

    for (int i = 0; i < 5; i++) {
        cout << nums[i];
    }

    for (int i: nums) {
        cout << i << endl;
    }
}
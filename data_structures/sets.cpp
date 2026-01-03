#include <iostream>
#include <unordered_set>
#include <set>

using namespace std;

int main() {
    unordered_set<int> primes;

    primes.insert(2);
    primes.insert(3);
    primes.insert(5);

    primes.erase(3); // returns 1 if successfully erased element, 0 for otherwise

    if (primes.count(4)) {
        cout << "4 is a prime";
    } else {
        cout << "4 isn't a prime";
    }
    


    unordered_set<int> unordered({4, 2, 7, 1, 3});
    cout << "unordered_set: ";
    
    for(int n: unordered) {
        cout << n << " ";
    }

    cout << "\n";

    set<int> ordered({4, 2, 7, 1, 3});
    cout << "set: ";
    for(int n: ordered) {
        cout << n << " ";
    }
}
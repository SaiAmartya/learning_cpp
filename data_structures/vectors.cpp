#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> alphabet; // can dynamically change in size
    alphabet.push_back('a');
    alphabet.push_back('b');
    alphabet.push_back('c');

    alphabet.pop_back();

    cout << alphabet.size() << endl;
    cout << alphabet.empty() << endl;

    for (int i = 0; i < alphabet.size(); i++){
        cout << alphabet[i] << " ";
    }
    cout << "\n---- FOR EACH LOOP OUTPUT ----" << endl;

    for (char letter: alphabet) {
        cout << letter << " ";
    }

}
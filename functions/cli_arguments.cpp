#include <iostream>

using namespace std;

// using command line arguments
int main(int argc, char *argv[]) {
    for(int i = 0; i < argc; i++) {
        cout << "arg " << i << ": " << argv[i] << "\n";
    }
    return 0;
}
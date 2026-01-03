#include <iostream>
#include <stack>
#include <queue>

using namespace std;

// to print stack must iterate from top, printing from a copy
void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

void printQueue(queue<string> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}


int main() {
    /* STACKS */
    stack<int> plates;

    plates.push(10);
    plates.push(8);
    plates.push(5);

    printStack(plates);

    /* QUEUES */
    queue<string> line;

    line.push("Sai");
    line.push("Dhairya");
    line.push("Aamir");
    line.push("Atharv");

    cout << line.front() << endl;; // Outputs: Sai
    cout << line.back() << endl; // Outputs: Atharv
   
    printQueue(line);
    
    line.pop(); // Removes Sai
}
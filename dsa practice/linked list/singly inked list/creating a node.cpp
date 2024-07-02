#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        this->data = 0;
        this->next = nullptr;
    }

    // Parameterized constructor
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }

    // Destructor
    ~Node() {
        cout << "Node with value: " << data << " deleted" << endl;
    }
};
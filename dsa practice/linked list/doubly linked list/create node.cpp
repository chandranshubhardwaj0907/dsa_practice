class Node {
public:
    int data;
    Node* next;
    Node* prev;
    
    Node() {
        this->data = 0;
        this->next = nullptr;
        this->prev = nullptr;
    }

    Node(int data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
    ~Node() {
        cout << "Node with value: " << data << " deleted" << endl;
    }
};

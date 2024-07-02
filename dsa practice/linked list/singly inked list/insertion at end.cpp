void InsertAtTail(Node* &head, Node* &tail, int data) {
    Node* newnode = new Node(data);
    if (head == nullptr) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
int findlen(Node* &head) {
    int len = 0;
    Node* temp = head;
    while (temp != nullptr) {
        temp = temp->next;
        len++;
    }
    return len;
}
void InsertAtPos(Node* &head, Node* &tail, int data, int pos) {
    if (head == nullptr) {
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    if (pos == 0) {
        InsertAtHead(head, tail, data);
        return;
    }

    int len = findlen(head);
    if (pos >= len) {
        InsertAtTail(head, tail, data);
        return;
    }

    int i = 1;
    Node* prev = head;
    while (i < pos) {
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;
    Node* newnode = new Node(data);
    newnode->next = curr;
    prev->next = newnode;
}

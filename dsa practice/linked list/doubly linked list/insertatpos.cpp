void insertAtPos(Node* &head, Node* &tail, int data, int pos) {
    if (pos <= 0) {
        insertAtHead(head, tail, data);
    } else {
        int len = getLength(head);
        if (pos >= len) {
            insertAtTail(head, tail, data);
        } else {
            Node* temp = head;
            int count = 0;
            while (temp != nullptr && count < pos) {
                temp = temp->next;
                count++;
            }
            if (temp != nullptr) {
                Node* newNode = new Node(data);
                newNode->next = temp;
                newNode->prev = temp->prev;
                if (temp->prev != nullptr) {
                    temp->prev->next = newNode;
                }
                temp->prev = newNode;
                if (pos == 0) {
                    head = newNode;
                }
            }
        }
    }
}
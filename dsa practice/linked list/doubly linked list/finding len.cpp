int getLength(Node* head) {
    int len = 0;
    Node* temp = head;
    while (temp != nullptr) {
        temp = temp->next;
        len++;
    }
    return len;
}

       int findlen(Node* &head) {
    int len = 0;
    Node* temp = head;
    while (temp != nullptr) {
        temp = temp->next;
        len++;
    }
    return len;
}
       int len  = findLength(head);


        //deleting last node
        if(position == len) {
                //find prev
                int i = 1;
                Node* prev = head;
                while(i < position - 1) {
                        prev = prev->next;
                        i++;
                }
                //step2:
                prev->next = NULL;
                //step3:
                Node* temp = tail;
                //step4:
                tail = prev;
                //step5:
                delete temp;
                return;
        }
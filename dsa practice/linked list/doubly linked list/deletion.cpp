void deletion(Node* &head, Node* &tail, int pos){
  if(head == NULL) {
                cout << "Cannot delete, LL is empty";
                return;
        }
        if(head->next == NULL){
            Node* temp = head;
            head  = NULL;
            tail = NULL;
            delete temp;
            return;
        }
        if(pos==1){
            Node*temp = head;
            head =head->next;
            head -> prev = NULL;
            temp ->next= NULL;
            delete temp;
            return;
        }
        int len =  getLength(head);
        if(pos==len){
            Node* temp = tail;
            tail = tail -> prev;
            temp->prev=NULL;
            tail->next =NULL;
            return;
        }
        int i = 1;
        Node* left = head;
        while(i<pos-1){
            left= left->next;
            Node* curr = left->next;
            Node* right = curr->next;
            left->next=right;
            right->prev=left;
            curr->prev= NULL;
            curr->next = NULL;
            delete curr;
         
        }
}
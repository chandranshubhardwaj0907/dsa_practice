#include <iostream>
using namespace std;


class Node{
        public:
        int data;
        Node* next;

        Node(int data) {
                this->data = data;
                this->next = NULL;
        }
};

void print(Node* head) {
        Node* temp = head;
        while(temp != NULL) {
                cout << temp -> data << " ";
                temp = temp -> next;
        }
        cout << endl;
}


Node* sort2(Node* &head) {
        if(head == NULL) {
                cout << "LL is empty " << endl;
                return NULL;
        }
        if(head -> next == NULL) {
                //sngle node in LL
                return head;
        }

     
        Node* zeroHead = new Node(-101);
        Node* zeroTail = zeroHead; 

        Node* oneHead = new Node(-101);
        Node* oneTail = oneHead; 

        Node* twoHead = new Node(-101);
        Node* twoTail = twoHead; 

      
        Node* curr = head;
        while(curr != NULL) {

                if(curr -> data == 0) {
                        
                        Node* temp = curr;
                        curr = curr -> next;
                        temp -> next = NULL;

                       
                        zeroTail -> next = temp;
                        zeroTail = temp;

                }
                else if(curr -> data == 1) {
                   
                        Node* temp = curr;
                        curr = curr -> next;
                        temp -> next = NULL;

                      
                        oneTail = temp;

                }
                else if(curr -> data == 2) {
             
                        Node* temp = curr;
                        curr = curr -> next;
                        temp -> next = NULL;

                        
                        twoTail -> next = temp;
                        twoTail = temp;

                }
        }

        Node* temp = oneHead;
        oneHead = oneHead -> next;
        temp -> next = NULL;
        delete temp;

        
        temp = twoHead;
        twoHead = twoHead -> next;
        temp -> next = NULL;
        delete temp;

        
        if(oneHead != NULL) {
               
                zeroTail -> next = oneHead;
                
                if(twoHead != NULL)
                        oneTail -> next = twoHead;
        }
        else{
              
                if(twoHead != NULL)
                        zeroTail -> next = twoHead;
        }

       
        temp = zeroHead;
        zeroHead = zeroHead -> next;
        temp -> next = NULL;
        delete temp;
        
        return zeroHead;

}



int main() {
  Node* head = new Node(2);
  Node* second = new Node(2);
  Node* third = new Node(1);
  Node* fourth = new Node(1);
  Node* fifth = new Node(0);
  Node* sixth = new Node(0);
  head -> next = second;
  second -> next = third;
  third -> next = fourth;
  fourth -> next = fifth;
  fifth -> next = sixth;

  cout << "input LL: ";
  print(head);


  
  cout << "printing the sorted list " << endl;
  Node* temp = NULL;
  head = sort2(head);

  print(head);

  return 0;
}
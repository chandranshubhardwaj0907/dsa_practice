// add 2 number 
// https://leetcode.com/problems/add-two-numbers/description/
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
void reverse(Node* &head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}
node*  add(node* &head1,node* &head2){
head1 = reverse(head1);
head2 = reverse(head2);
node* ansHead = NULL;
node* ansTail = NULL;
int carry =0;

while(head1 != NULL && head2!=NULL){
    int sum = head1->data + head2->data + carry;
    int digit = sum%10;
    carry = sum/10;

    Node* newNode = new node(digit);
    if(ansHead==NULL{
        ansHead = newNode;
        ansTail = newNode;
    }
    else{
     ansTail->next = newNpde;
     ansTail = newNode;   
    }
    head1= head1->next;
    head2= head2->next;
    
}
}
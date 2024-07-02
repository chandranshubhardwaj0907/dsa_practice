// check palindrome linked list
// https://leetcode.com/problems/palindrome-linked-list/description/
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

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

bool isPalindrome(Node* head) {
    if (head == NULL) {
        cout << "ll is empty";
        return false;
    }
    if (head->next == NULL) {
        return true;
    }
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    Node* reverseLinkedList = slow;
    reverse(reverseLinkedList);
    
    Node* temp1 = head;
    Node* temp2 = reverseLinkedList;
    while (temp2 != NULL) {
        if (temp1->data != temp2->data) {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return true;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);
    
    if (isPalindrome(head)) {
        cout << "The linked list is a palindrome" << endl;
    } else {
        cout << "The linked list is not a palindrome" << endl;
    }
    
    return 0;
}

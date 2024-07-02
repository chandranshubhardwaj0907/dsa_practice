// reverse linked list in k groups
// https://leetcode.com/problems/reverse-nodes-in-k-group/
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {

        cout << "Node with value: " << this->data << "deleted" << endl;
    }
};
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
}
int getlen(node *&head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}
node* reverseKnodes(node *&head , int k)
{
    if (head == NULL)
    {
        return;
    }
    int len = getlen(head);
    if ( k > len)
    {
        return head;
    }
    node* prev = NULL;
    node* curr = head;
    node* next = curr->next;
    int count = 0;
    while(count<k){
        forward= curr->next;
        curr->next = prev;
        prev = curr;
        curr= forward;
        count++
    }
    if(forward!=NULL){
head->next = reverseKnodes(forward,k);
    }
    return prev;
    
}

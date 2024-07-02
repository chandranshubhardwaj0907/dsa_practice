// 876. Middle of the Linked List
// https://leetcode.com/problems/middle-of-the-linked-list/
#include<iostream>
using namespace std;
class node{
    int data;
    node* next;
    node(){
        this->data=0;
        this->next=NULL;
    }
    node(int data){
        this->data=data;
        this->next = NULL;
    }
};

void print(node* &head){
    node* temp =head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int getlen(node* &head){
    int len=0;
    node* temp =head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
// // we will use tortoise algo
// slow and fast at head in the starting
// slow -> 1 step 
// fast -> 2 steps
// first fast will move and after that slow will move 
// o(N) T.C
void middle(node* &head){
    if(head==NULL){
        cout<< "linked is empty"
    }
    if(head->next =NULL){
        return head;
    }
    node* fast = head;
    node* slow = head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        
    }
    return slow;
}
int main(){

}
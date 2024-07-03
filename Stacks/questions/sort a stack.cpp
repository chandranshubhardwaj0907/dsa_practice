#include <iostream>
#include <stack>
using namespace std;
void insertSorted(stack<int> &s , int topElement){
    if(s.empty()){
        s.push(topElement);
        return;

    }
    else{
        if(topElement>s.top()){
            s.push(topElement);
            return;
        }
    int topElement = s.top();
    s.pop();
    insertSorted(s,topElement);
    s.push(topElement);
    }
}
int main(){
    stack<int> s;
 void sortStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int topElememt = s.top();
    s.pop();
    sortStack(s);
    insertSorted(s,topElememt);
 }   
}
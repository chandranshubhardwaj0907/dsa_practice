// insert topmost element at the bottom
#include <iostream>
#include <stack>
using namespace std;
void solve(stack<int> s, int target)
{
    if (s.empty())
    {
        return;
    }
    int topElement = s.top();
    s.pop();
    solve(s, target);
    s.push(topElement);
}
void insertAtBottom(stack<int> &s)
{
    if (s.empty())
    {
        cout << "stack is empty";
        return;
    }
    else
    {
        int target = s.top();
        s.pop();
        solve(s, target);
    }
}
int main
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    insertAtBottom(s);
    while (!s.empty())
    {
        cout << s.top();
        s.pop()
    }
    return 0;
}
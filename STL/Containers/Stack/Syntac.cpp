// Implement stack;

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(50);
    s.push(42);
    s.push(36);
    s.push(48);
    s.emplace(23);

    s.pop();
    s.pop();

    cout<<"Topmost element: " << s.top() << endl;
    cout<<"Size of stack: " << s.size() << endl;

    return 0;
}
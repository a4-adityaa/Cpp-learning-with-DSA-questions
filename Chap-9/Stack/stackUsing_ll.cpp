// stack implementation using linked list

#include<iostream>
#include<list>
using namespace std;

class Stack{
    list<int> ll;

public:
    void push(int val){
        ll.push_front(val);
    }

    void pop(){
        ll.pop_front();
    }

    int top(){
        return ll.front();
    }

    bool empty(){
        return ll.size() == 0;
    }
};

int main(){
    Stack s;

    s.push(4);
    s.push(5);
    s.push(6);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop(); 
    }
    cout << endl;
    return 0;
}
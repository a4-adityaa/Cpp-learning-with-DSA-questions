// stack implementation using vector

#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> v;

public:
    void push(int val){
        v.push_back(val);
    }

    void pop(){
        v.pop_back();
    }

    int top(){
        return v.back(); // v[v.size()-1]
    }

    bool empty(){
        return v.size() == 0;
    }

    void printStack(){
        for(int i=0; i < v.size(); i++){
            cout << v[i] << " ";
        }
    }
};

int main(){
    Stack s;

    s.push(5);
    s.push(2);
    s.push(3);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    // cout << endl;
    // s.printStack();
    return 0;

}
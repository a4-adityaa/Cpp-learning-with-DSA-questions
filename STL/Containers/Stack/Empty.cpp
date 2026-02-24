// use of empty keyword;

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

    while(!s.empty()){
        cout << "topmost element: " << s.top()<< endl;
        s.pop();
    }

    return 0;
}
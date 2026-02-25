// use of swap to swap two stack;

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s1;
    stack<int> s2;
    s1.push(50);
    s1.push(63);
    s1.push(25);

    s2.swap(s1);

    cout<< "size of s1:"<< s1.size()<<endl;
    cout<< "size of s2:"<< s2.size()<<endl;

    return 0;
}

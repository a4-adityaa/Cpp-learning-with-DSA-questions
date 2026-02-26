// implementation of queue;

#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout <<"1st element before pop: "<< q.front() << endl; // return 
    q.pop();

    cout <<"1st element after pop: "<< q.front() << endl; // return 2
    cout <<"Last element of queue: "<< q.back() << endl;  // return 3
    return 0;
}
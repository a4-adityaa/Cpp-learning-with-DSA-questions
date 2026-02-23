// implement deque;

#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);

    d.pop_back();
    d.pop_front();

    for(int val : d){
        cout<< val << " ";
    }
    cout<< endl;

    int n;
    cout<< "Enter value of n: ";
    cin >> n;
    cout<< "Element at particular index:"<< d[n] << endl;

    return 0;
}
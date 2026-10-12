// Here we are going to implement Circular Doubly linked list from scrach

#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class CircularList{
    Node* head;
    Node* tail;

    public:
    CircularList(){
        head = tail = NULL;
    }
};

int main(){

    CircularList cll;

    return 0;
}
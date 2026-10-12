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

    void insertAtHead(int val){
        Node* newNode = new Node(val);

        if(tail== NULL){
            head = tail = newNode;
            tail ->next = head;
        } else{
            newNode-> next= head;
            head = newNode;
            tail->next= head;
        }
    }

    void insertAtTail(int val){
        Node* newNode = new Node(val);
        
        if(tail == NULL){
            head = tail = newNode;
            tail-> next = newNode;
        } else{
            tail-> next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }

    void printList(){
        if(head == NULL) return;
        
        cout << head->data << "->";
        Node* temp = head-> next;

        while(temp != head){
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
};

int main(){

    CircularList cll;
    cll.insertAtHead(1);
    cll.insertAtHead(2);
    cll.insertAtHead(3);
    cll.insertAtTail(4);
    cll.insertAtTail(5);

    cll.printList();

    return 0;
}
// Reverse a linked list;

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class list{
    public:
    Node* head;
    Node* tail;
    list(){
        head = tail = NULL;
    }
    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        } else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void printll(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
    Node* reverse(Node* &head){
        Node* prevptr = NULL;
        Node* currptr = head;
        Node* nextptr;

        while(currptr != NULL){
            nextptr = currptr->next;
            currptr->next = prevptr;

            prevptr = currptr;
            currptr = nextptr;
        }
        return prevptr;
    }
};

int main(){
    list l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);

    cout<<"Original list: ";
    l.printll();

    l.head = l.reverse(l.head);

    cout<<"Reversed list: ";
    l.printll();

    return 0;
}
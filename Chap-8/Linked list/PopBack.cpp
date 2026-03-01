// implement pop back using scrach;

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data= val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

    public:
    List(){
        head=tail=NULL;
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
    void pop_back(){
        if(head == NULL){
            cout<<"LL is empty";
            return;
        }
        if(head->next == NULL){
            delete head;
            head=tail=NULL;
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
    }
    void PrintLL(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL" << endl;
    }
};

int main(){
    List ll;
    
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    
    ll.PrintLL();

    ll.pop_back();
    ll.pop_back();

    ll.PrintLL();
    
    return 0;
}
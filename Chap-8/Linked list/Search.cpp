// search an element in linked list;

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

class List{
    Node* head;
    Node* tail;
    
        public:
        List(){
            head=tail=NULL;
        }
    
        void Push_back(int val){
            Node* NewNode = new Node(val);
    
            if(head== NULL){
                head=tail=NewNode;
            return;
            } else{
                tail->next = NewNode;
                tail = NewNode;
            }
        }
        bool Search(int key){
            Node* temp = head;
            while(temp!=NULL){
                if(temp->data == key){
                    return true;
                }
                temp = temp->next;
            }
            return false;
        }
        void PrintLL(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<"-> ";
                temp = temp->next;
            }
        }
    
};
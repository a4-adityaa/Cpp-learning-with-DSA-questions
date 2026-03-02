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
int main(){
    List l1;
    l1.Push_back(10);
    l1.Push_back(20);
    l1.Push_back(30);
    l1.Push_back(40);
    l1.PrintLL();
    cout<<"\n"<<l1.Search(20);
    return 0;
}